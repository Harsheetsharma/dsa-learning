#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

void moveZeroToLast(int nums[], int size)
{
    int newNums[size] = {};
    int index = 0;
    // sort(nums, size + nums);
    cout << "sorted array ";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            newNums[index] = nums[i];
            index++;

            // cout << nums[i] << " ";
        }
    }
    for (int j = 0; j < size; j++)
    {
        if (nums[j] == 0)
        {
            newNums[index] = nums[j];
            index++;
        }
    }

    for (int k = 0; k < size; k++)
    {
        cout << newNums[k] << " ";
    }
}
int main()
{
    int nums[] = {0, 1, 0, 3, 12};
    int size = sizeof(nums) / sizeof(nums[0]);
    moveZeroToLast(nums, size);
    return 0;
}