#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void leetcode643(int nums[], int size, int k)
{
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }

    int maxsum = sum;

    for (int i = k; i < size; i++)
    {
        sum += nums[i] - nums[i - k];
        maxsum = max(sum, maxsum);
    }

    double result = (double)maxsum / k;
    cout << result;
}

int main()
{
    int nums[] = {1, 12, -5, -6, 50, 3};
    int k = 4;
    int size = sizeof(nums) / sizeof(nums[0]);
    leetcode643(nums, size, k);
    return 0;
}