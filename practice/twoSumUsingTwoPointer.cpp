#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

void twoSumUsingPointer(int nums[], int target, int size)
{
    sort(nums, nums + size);
    int *first = nums;
    int *second = &nums[size - 1];
    while (first < second)
    {

        int sum = *first + *second;
        if (sum == target)
        {
            cout << *first << "+" << *second << "= " << target;
            break;
        }
        if (sum < target)
        {
            first++;
        }
        else
        {
            second--;
        }
    }
}

int main()
{

    int array[] = {1, 2, 6, 4, 9};
    int target = 5;
    int size = sizeof(array) / sizeof(array[0]);
    twoSumUsingPointer(array, target, size);
    return 0;
}