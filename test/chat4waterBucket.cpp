// #include <iostream>
// #include <algorithm>
// #include <unordered_map>
// using namespace std;

// void calculateWaterBucket(int size, int nums[])
// {
//     int max = 0;
//     int secondMax = 0;
//     int highIndex = 0;
//     int lowerIndex = 0;
//     int difference = 0;
//     int finalanswer = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (max < nums[i])
//         {
//             max = nums[i];
//         }
//     }
//     for (int j = 0; j < size; j++)
//     {
//         if (nums[j] != max && nums[j] > secondMax)
//         {
//             secondMax = nums[j];
//         }
//     }
//     cout << "largetst is " << max << endl;
//     cout << "smallest is " << secondMax << endl;

//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] == secondMax)
//         {
//             lowerIndex = i;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] == max)
//         {
//             highIndex = i;
//             break;
//         }
//     }
//     cout << lowerIndex << endl
//          << highIndex << endl;
//     difference = abs(lowerIndex - highIndex);

//     finalanswer = secondMax * difference;

//     cout << finalanswer;
// }

// int main()
// {
//     int nums[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//     int size = sizeof(nums) / sizeof(nums[0]);
//     calculateWaterBucket(size, nums);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    int area = 0;
    while (left < right)
    {
        area = (right - left) * min(height[left], height[right]);
        maxWater = area;
        return maxWater;
        // TODO: calculate current area
        // TODO: update maxWater
        // TODO: move the pointer with smaller height
    }

    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
    return 0;
}
