#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int threeSum(int nums[], int size, int target)
{
    sort(nums, nums + size);
    int *firstPointer = nums;
    int *LeftPointer = &nums[1];
    int *RightPointer = &nums[size - 1];
    int closestSum = *firstPointer + *LeftPointer + *RightPointer;

    for (int i = 0; i < size - 2; i++)
    {
        firstPointer = &nums[i];
        LeftPointer = &nums[i + 1];
        RightPointer = &nums[size - 1];

        while (LeftPointer < RightPointer)
        {
            int sum = *firstPointer + *LeftPointer + *RightPointer;
            if (abs(sum - target) < abs(closestSum - target))
            {
                closestSum = sum;
            }

            // here seperately decide to which pointer to move
            if (sum < target)
            {
                LeftPointer++;
            }
            else
            {
                RightPointer--;
            }
        }
    }
    return closestSum;
}

int main()
{
    int nums[] = {-1, 2, 1, -4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 1;
    int const answer = threeSum(nums, size, target);
    cout << answer << endl;
    return 0;
}
