
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr1[] = {2, 3, 4, 8, 7, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr1[i]]++;
    }
    for (int j = 0; j < n; j++)
    {
        if (freq[arr1[j]] == 1)
        {
            cout << arr1[j];
        }
    }
    return 0;
}