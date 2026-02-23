#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

// sliding window pattern usig hashmap and two pointer to check largest
// substring in given string

// void LongestSubstringWithNoRepeatChar(string str)
// {
//     int left = 0;
//     int maxlength = 0;
//     unordered_map<char, int> mp;

//     for (int right = 0; right < str.length(); right++)
//     {

//         if (mp.find(str[right]) != mp.end() && mp[str[right]] >= left)
//         {
//             left = mp[str[right]] + 1;
//         }
//         mp[str[right]] = right;

//         // Update maximum length
//         maxlength = max(maxlength, right - left + 1);
//     }
//     cout << "the longest substring is = " << maxlength;
// }

// int main()
// {
//     string str = "aaabbach";
//     LongestSubstringWithNoRepeatChar(str);
//     return 0;
// }

// void twosum(int nums[], int size, int target)
// {

//     int *first = nums;
//     int *last = &nums[size - 1];

//     while (first < last)
//     {
//         if (*first + *last == target)
//         {
//             cout << *first << "+" << *last << "= " << target;
//             break;
//         }
//         if (*first + *last < target)
//         {
//             first++;
//         }
//         else
//         {
//             last--;
//         }
//     }
// }

// int MediumPatternEvolution(int nums[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] < 0)
//         {
//             nums[i] = -(nums[i]);
//         }
//     }

//     sort(nums, nums + size);

//     int *first = nums;
//     int *last = &nums[size - 1];

//     while (first <= last)
//     {
//         *first *= *first;
//         first++;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << nums[i] << " ";
//     }
// }

// Given sorted array:

// [1,2,3,4,4,9,10]
// Find if there exists three numbers that sum to 13.

// void threeSum(int nums[], int size, int target)
// {
//     for (int i = 0; i < size - 2; i++)
//     {
//         int left = i + 1;
//         int right = size - 1;

//         while (left < right)
//         {
//             int sum = nums[i] + nums[left] + nums[right];

//             if (sum == target)
//             {
//                 cout << nums[i] << " + "
//                      << nums[left] << " + "
//                      << nums[right] << " = "
//                      << target << endl;
//                 return;
//             }
//             else if (sum < target)
//             {
//                 left++;
//             }
//             else
//             {
//                 right--;
//             }
//         }
//     }

//     cout << "No triplet found";
// }

void countPair(int nums[], int size, int target)
{
    int *first = nums;
    int *last = &nums[size - 1];
    int count = 0;
    while (first < last)
    {
        if (*first + *last < target)
        {
            first++;
            count += (last - first);
        }
        else
        {
            last--;
        }
    }
    cout << count;
}
int main()
{
    // int nums[] = {-4, -1, 0, 3, 10};
    int nums[] = {1, 2, 3, 4, 4, 9, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 11;
    // threeSum(nums, size, target);
    countPair(nums, size, target);
    return 0;
}