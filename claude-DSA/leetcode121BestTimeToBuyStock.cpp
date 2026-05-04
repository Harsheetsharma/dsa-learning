// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <iostream>

using namespace std;

void BestTimeToBuyStock(int nums[], int size)
{
    int min = nums[0];
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
        else
        {
            ans = max(ans, nums[i] - min);
        }
    }
    cout << ans;
}

int main()
{
    int nums[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    BestTimeToBuyStock(nums, size);

    return 0;
}