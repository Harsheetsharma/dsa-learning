#include <iostream>
#include <unordered_map>
using namespace std;

// Given a binary array, find the longest subarray containing only 1s after deleting one element.

void findsubarraywhichHasMost1s(int nums[], int size, int k)
{
    unordered_map<int, int> window;
    int left = 0;
    int maxlength = 0;
    int maxfreq = 0;
    for (int right = 0; right < size; right++)
    {
        window[nums[right]]++;
        maxfreq = max(maxfreq, window[nums[right]]);
        while ((right - left + 1) - maxfreq > k)
        {
            window[nums[left]]--;
            left++;
        }
        maxlength = max(maxlength, right - left);
    }
    cout << maxlength << endl;
}

int main()
{
    int array[] = {1, 1, 0, 1, 0, 1, 1, 1, 1};
    int k = 1;
    int size = sizeof(array) / sizeof(array[0]);
    findsubarraywhichHasMost1s(array, size, k);
    return 0;
}

// SIMULATION
// we track
// left
// right
// window
// maxfeq
// maxlength

// step1
// left = 0;
// maxfeq = 0;
// maxlength = 0;
// window{}
// right = 0 = 1 //according to array
// window={1//element :1//times it appeared}
// check does =  window-maxfeq>=k
//     1-1 >=1 = 0>=1 false ,  comeout of loop

// maxfeq =1;
// maxlength = 1;
// window{1:1}

// step 2
// left = 0
// right = 1 = 1 // according to array
// window{1:2}
// maxfeq = 2
// cal = window -maxfeq >=k
//       2 -2 = 1 false no change in left
// maxlenth = 2

// step 3
// left = 0
// right = 2 = 0
// window {1:2 , 0:1}
// maxfreq = 2
// window size = 3
// window - maxfreq >=k
// 3-2 =1 valid
// left++
// maxfeq = 2
