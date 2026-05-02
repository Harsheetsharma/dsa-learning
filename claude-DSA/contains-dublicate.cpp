#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

void containsDublicate(int nums[], int size)
{
    unordered_set<int> window;

    for (int i = 0; i < size; i++)
    {
        if (window.count(nums[i]))
        {
            cout << "dublicate exist";
            return;
        }

        window.insert(nums[i]);
    }
    cout << "dublicate does not exist!";
}

int main()
{
    int nums[] = {0, 23, 4, 7, 2, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    containsDublicate(nums, size);
    return 0;
}