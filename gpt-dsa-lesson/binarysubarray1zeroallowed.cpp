#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

// Minimum Window Substring (LeetCode Hard classic)
// This introduces:
// requirement map
// satisfied characters
// shrinking optimization
// This is where sliding window becomes truly interview level.
// Question for You (Concept Check)
// If window currently contains:
// [1,1,0,1,0]
// How many zeros are inside?
// And what should the window do next?

void binaryarray1zeroallowed(int nums[], int k, int size)

{
    int left = 0;
    int maxlength = 0;
    int maxfeq = 0;
    int count = 0;
    unordered_map<int, int> window;

    for (int right = 0; right < size; right++)
    {
        while (window.count(0) && window[0] >= k)
        {
            window[nums[left]]--;
            left++;
        }
        window.insert({nums[right]});

        maxlength = max(maxlength, right - left + 1);
    }

    cout << maxlength;
}

int main()
{
    int nums[] = {1, 1, 0, 1, 0};
    int k = 1;
    int size = sizeof(nums) / sizeof(nums[0]);
    binaryarray1zeroallowed(nums, k, size);
    return 0;
}