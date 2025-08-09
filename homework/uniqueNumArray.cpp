
#include <iostream>
#include <climits>
using namespace std;

void UniqueValueFind(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int arr[] = {1, 2, 4, 2, 1, 4, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    UniqueValueFind(arr, size);
    return 0;
}