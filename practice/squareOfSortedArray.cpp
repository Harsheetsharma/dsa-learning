#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

// 9️⃣ Squares of a Sorted Array

// Input: {-4,-1,0,3,10}
// Output: {0,1,9,16,100}

void squareOfSortedArray(int nums[], int size)
{

    for (int i = 0; i < size; i++)
    {
        nums[i] *= nums[i];
    }

    sort(nums, size + nums);

        for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    int nums[] = {-4, -1, 0, 3, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    squareOfSortedArray(nums, size);

    return 0;
}