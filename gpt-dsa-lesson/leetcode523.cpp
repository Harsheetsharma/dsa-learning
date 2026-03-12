#include <iostream>
#include <unordered_map>
using namespace std;

// Pattern: Prefix Sum

// Problem: Continuous Subarray Sum
// Difficulty: Medium

void leetcode523(int nums[], int k, int size)
{

    int left = 0;
    int maxlength = 0;
    unordered_map<int, int> window;
    window[0] = 1;
    int prefix_sum = 0;
    for (int right = 0; right < size; right++)
    {
        prefix_sum += nums[right];

        if (window.count(prefix_sum % 2))
        {
            maxlength = max(maxlength, right - window[prefix_sum % 2]);
        }

        window[prefix_sum];
    }
    cout << maxlength;
}

int main()
{

    int nums[] = {23, 2, 4, 6, 4, 7};
    int k = 6;
    int size = sizeof(nums) / sizeof(nums[0]);
    leetcode523(nums, k, size);
    return 0;
}