#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int reverseArray(int nums[], int size)
{
    int *left = nums;
    int *last = &nums[size - 1];
    while (left < last)
    {
        swap(*left, *last);
        left++;
        last--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    int nums[] = {3, 1, 4, 2, 3, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    reverseArray(nums, size);
    return 0;
}