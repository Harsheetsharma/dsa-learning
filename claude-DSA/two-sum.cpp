#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

void two_sum(int nums[], int size, int target)
{
    sort(nums, nums + size);
    int *first = nums;
    int *last = &nums[size - 1];

    while (first < last)
    {
        int sum = *first + *last;
        if (sum == target)
        {
            cout << *first << "+" << *last << "= " << target;
            break;
        }
        if (sum < target)
        {
            first++;
        }
        else
        {
            last--;
        }
    }
}

int main()
{

    int array[] = {2, 4, 8, 3, 2, 0, 5, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 11;
    two_sum(array, size, target);
    return 0;
}