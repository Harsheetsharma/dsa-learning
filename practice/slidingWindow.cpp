// Array:
// [4,2,1,7,8,1,2,8]
// k = 3
// Tell me:
// First window sum
// Second window sum using sliding window formula
// Third window sum

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

void Findmaximumsumsubarrayofsize(int nums[], int size)
{
    int *first = nums;
    int *second = &nums[1];
    int *third = &nums[2];
    int *last = &nums[size - 1];
    int oldSum = *first + *second + *third;

    int maxsum = oldSum;
    cout << "firstSum = " << "[" << *first << "," << *second << "," << *third << "] = " << oldSum << endl;
    while (third < last)
    {

        int newSum = oldSum - *first + *(third + 1);
        first++;
        second++;
        third++;

        cout << " " << "[" << *first << "," << *second << "," << *third << "]" << "= " << newSum << endl;
        if (newSum > maxsum)
        {

            maxsum = newSum;
        }
        oldSum = newSum;
    }
    cout << "maxsum is =" << maxsum;
}

int main()
{
    int nums[] = {4, 2, 1, 7, 8, 1, 2, 8};
    int size = sizeof(nums) / sizeof(nums[0]);
    Findmaximumsumsubarrayofsize(nums, size);

    return 0;
}