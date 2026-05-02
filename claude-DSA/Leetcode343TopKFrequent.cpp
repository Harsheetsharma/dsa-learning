#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

void topKFrequent(int nums, int size, int k)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < size; i++)
    {
        mp[nums[i]]++;
        if (mp.size() > k)
        {
                }
    }
    return;
}

int main()
{
    int nums[] = {1, 1, 1, 2, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 2;
    int ans = topKFrequent(nums, size, k);

    return 0;
}