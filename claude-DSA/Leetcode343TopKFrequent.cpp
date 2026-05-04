#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

void topKFrequent(int nums[], int size, int k)
{
    unordered_map<int, int> mp;
    vector<int> arry;
    int maxfreq = 0;
    int mostFrequentElement = 0;
    // step1 count freq
    for (int i = 0; i < size; i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] > maxfreq)
        {
            maxfreq = mp[nums[i]];
            mostFrequentElement = nums[i];
        }
        if (nums[i] != mostFrequentElement)
        {
            arry.push_back(nums[i]);
        }
    }
    unordered_map<int, int> window;
    int newFreq = 0;
    for (auto it : arry)
    {
        window[it]++;
        if (window[it] > newFreq)
        {
            newFreq = window[it];
        }
    }
    cout << maxfreq << endl;
    cout << newFreq;
}

int main()
{
    int nums[] = {1, 1, 1, 2, 2, 3, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 2;
    topKFrequent(nums, size, k);
    return 0;
}