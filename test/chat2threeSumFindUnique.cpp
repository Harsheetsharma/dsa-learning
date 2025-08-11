#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Hard Challenge: 3Sum (Find All Unique Triplets)
// You’re given an integer array nums.
// Find all unique triplets [nums[i], nums[j], nums[k]] such that:

void Unique3Sum(int nums[], int size)
{
    sort(nums, nums + size);
    for (int i = 0; i < size - 2; i++)
    {
        int start = i;
        int left = i + 1;
        int right = size - 1;
        int sumzero = nums[start] + nums[left] + nums[right];
        while (left < right)
        {
            int sum = nums[start] + nums[left] + nums[right];
            if (sum == 0)
            {
                sumzero = sum;
                cout << "[" << nums[start] << " "
                     << nums[left] << " "
                     << nums[right] << "]" << endl;

                while (left < right && nums[left] == nums[left + 1])
                {
                    left++;
                }
                while (right > left && nums[right] == nums[right - 1])
                {
                    right--;
                }
                left++;
                right--;
            }

            if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    // return finalanswer;
}

int main()
{

    int nums[] = {-1, 0, 1, 2, -1, -4};
    int size = sizeof(nums) / sizeof(nums[0]);
    // int data =
    Unique3Sum(nums, size);
    // cout << data;
    return 0;
}