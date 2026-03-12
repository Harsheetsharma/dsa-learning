#include <iostream>
#include <unordered_map>
using namespace std;
// Pattern: Prefix Sum + HashMap
// Problem: Maximum Size Subarray Sum Equals k
// LeetCode #: 325

void leetcode325(int nums[], int size, int k)
{
    int left = 0;
    int prefix_sum = 0;
    int maxlenth = 0;
    unordered_map<int, int> window;
    window[0] = -1;
    for (int right = 0; right < size; right++)
    {
        // window[nums[right]]++;
        prefix_sum += nums[right];
        if (window.count(prefix_sum - k))
        {

            maxlenth = max(maxlenth, right - window[prefix_sum - k]);
        }
        window[prefix_sum]++;
    }
    cout << maxlenth;
}

int main()
{
    int nums[] = {2, -1, 2, -1, 2, 1, 2, 3, 0, 0, 0};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 4;
    leetcode325(nums, size, k);
    return 0;
}