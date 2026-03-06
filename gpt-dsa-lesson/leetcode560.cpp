#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

// Pattern: Prefix Sum + HashMap

// Problem: Subarray Sum Equals K
// LeetCode #: 560
// Difficulty: Medium

// Problem Statement

// Given an array:

// nums = [1,1,1]
// k = 2

// Count how many subarrays have sum = k.

// Example:

// [1,1] → sum = 2
// [1,1] → sum = 2

// Answer = 2
void leetcode560(int nums[], int k, int size)
{
    int left = 0;
    unordered_map<int, int> window;
    int maxfreq = 0;
    int previous_prefix_sum = 0;
    int count = 0;
    window[0] = 1;
    for (int right = 0; right < size; right++)
    {

        previous_prefix_sum += nums[right];
        if (window.count(previous_prefix_sum - k))
        {
            count += window[previous_prefix_sum - k];
        }
        window[previous_prefix_sum]++;
    }

    cout << count;
}

int main()
{
    int nums[] = {3, 1, 1, 1, 1, 1};
    int k = 4;
    int size = sizeof(nums) / sizeof(nums[0]);
    leetcode560(nums, k, size);
    return 0;
}