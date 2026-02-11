#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

// 5️⃣ Merge Two Sorted Arrays (Without Extra Space if possible)

// void mergeTwoSortedArray(int nums[], int nums2[], int size1, int size2)
// {
//     sort(nums, nums + size1);
//     sort(nums2, nums2 + size2);
//     int index = 0;
//     int newArraySize = size1 + size2;
//     int newArray[newArraySize] = {};
//     for (int i = 0; i < size1; i++)
//     {
//         newArray[index] = nums[i];
//         index++;
//     }
//     for (int j = 0; j < size2; j++)
//     {
//         newArray[index] = nums2[j];
//         index++;
//     }
//     int size3 = sizeof(newArray) / sizeof(newArray[0]);
//     sort(newArray, newArray + size3);
//     for (int k = 0; k < size3; k++)
//     {
//         cout << newArray[k] << " ";
//     }
// }

// int main()
// {
//     int nums[] = {1, 3, 5, 7};
//     int nums2[] = {0, 2, 6, 8, 9};
//     int size1 = sizeof(nums) / sizeof(nums[0]);
//     int size2 = sizeof(nums2) / sizeof(nums2[0]);

//     mergeTwoSortedArray(nums, nums2, size1, size2);
//     return 0;
// }

// now using two pointer approach

void mergeTwoSortedArray(int nums[], int nums2[], int size1, int size2)
{
}

int main()
{
    int nums[] = {1, 3, 5, 7};
    int nums2[] = {0, 2, 6, 8, 9};
    int size1 = sizeof(nums) / sizeof(nums[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    mergeTwoSortedArray(nums, nums2, size1, size2);
    return 0;
}