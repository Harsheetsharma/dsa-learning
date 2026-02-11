// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

// void twosum(int nums[], int size, int target)
// {
//     sort(nums, nums + size);

//     for (int i = 0; i < size; i++)
//     {
//         int firstpointer = nums[i];
//         int lastpointer = size - i;

//         if (firstpointer + lastpointer == target)
//         {
//             cout << firstpointer << "+" << lastpointer << "=" << target;
//             break;
//         }
//     }
// }

// void twosum(int num[], int size, int target)
// {

// int isTrue = false;
// for (int i = 0; i < size; i++)
// {
//     for (int j = i + 1; j < size; j++)
//     {
//         if (num[i] + num[j] == target)
//         {
//             cout << i << "+" << j << "=" << target;
//             isTrue = true;
//             break;
//         }
//     }
//     if (isTrue)
//     {
//         break;
//     }
// }
// }

// int main()
// {
//     // Write C++ code here
//     int nums[] = {2, 5, 7, 5, 12};
//     int target = 9;
//     int size = sizeof(nums) / sizeof(nums[0]);
//     twosum(nums, size, target);
// }

// // sort(nums, nums + size);
//     int *startPointer = nums;
//     int *lastPointer = &nums[size - 1];

//     while (lastPointer > startPointer)
//     {
//         int sum = *startPointer + *lastPointer;
//         if (sum == target)
//         {
//             cout << *startPointer << "+" << *lastPointer << "=" << target;
//             break;
//         }
//         else if (sum > target)
//         {
//             lastPointer--;
//         }
//         else
//         {
//             startPointer++;
//         }
//     }

int findRepeat(int nums[], int size)
{
    sort(nums, nums + size);

    for (int i = 0; i < size - 1; i++)
    {
        int *left = &nums[i];
        int *right = &nums[i + 1];
        if (*left == *right)
        {
            return nums[i];
        }
    }
}

// int findRepeat(int nums[], int size)
// {
//     for (int i = 0; i <= size; i++)
//     {
//         for (int j = 0; j <= size; j++)
//         {
//             if (nums[i] == nums[j])
//             {
//                 return nums[i];
//             }
//         }
//     }
// }

int main()
{

    // write c++ code here
    int nums[] = {5, 1, 3, 2, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int answer = findRepeat(nums, size);
    cout << "repeated is " << answer;
}