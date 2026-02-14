#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <math.h>
using namespace std;

void containerWithMostWater(int nums[], int size)
{
    int *first = nums;
    int *last = &nums[size - 1];
    int compute;
    int maxComputeWater = 0;
    while (first < last)
    {
        int height = min(*first, *last);
        compute = height * (last - first);
        if (maxComputeWater < compute)
        {
            maxComputeWater = compute;
        }
        if (*first < *last)
        {
            first++;
        }
        else
        {
            last--;
        }
    }
    cout << "bucket is" << maxComputeWater;
}

int main()
{
    int nums[] = {2, 6, 3, 7, 1, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    containerWithMostWater(nums, size);
    return 0;
}