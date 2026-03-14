#include <iostream>
#include <unordered_map>
using namespace std;

// Pattern: Prefix Sum

// Problem: Continuous Subarray Sum
// Difficulty: Medium

void leetcode523(int nums[], int k, int size)
{

    int maxlength = 0;
    unordered_map<int, int> window;
    window[0] = -1;
    int prefix_sum = 0;
    for (int right = 0; right < size; right++)
    {
        prefix_sum += nums[right];
        int remainder = prefix_sum % k;
        if (window.count(remainder))
        {
            if (right - window[remainder] > 1)
            {
                maxlength = max(maxlength, right - window[remainder]);
            }
        }
        else
        {
            window[remainder] = right;
        }
    }
    cout << maxlength;
}

int main()
{

    int nums[] = {23, 2, 4, 6, 7};
    int k = 6;
    int size = sizeof(nums) / sizeof(nums[0]);
    leetcode523(nums, k, size);
    return 0;
}