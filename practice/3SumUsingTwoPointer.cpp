#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

// 🔟 3Sum (Very Important)

// Find triplets that sum to 0.

// without dublicates
// void find3Sum(int nums[], int size)
// {
//     // now find the 3 numbers that add up to target;

//     int *first = nums;
//     int *last = &nums[size - 1];
//     int fixed = nums[1];
//     sort(nums, size + nums);
//     while (first < last)
//     {
//         if (*first + *last + fixed == 0)
//         {
//             cout << "[" << *first << "," << *last << "," << fixed << "]";
//         }
//         first++;
//         last--;
//     }
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout << nums[i] << " ";
//     // }
// }

void find3SumWithoutDublicates(int nums[], int size)
{
    sort(nums, nums + size);
    for (int i = 0; i < size - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int *left = nums + i + 1;
        int *right = nums + size - 1;

        while (left < right)
        {
            int sum = nums[i] + *left + *right;
            if (sum == 0)
            {
                cout << "[" << nums[i] << "," << *left << "," << *right << "]\n";
                left++;
                right--;

                while (left < right && *left == (*left - 1))
                    left++;
                while (left < right && *right == *(right + 1))
                    right--;
            }
            else if (sum < 0)
                left++;
            else
                right--;
        }
    }
}
int main()
{
    int nums[] = {-2, 0, 2, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    // find3Sum(nums, size);
    find3SumWithoutDublicates(nums, size);
    return 0;
}
