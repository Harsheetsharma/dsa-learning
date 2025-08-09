#include <iostream>
#include <climits>
using namespace std;

void chageArray(int arr[], int size)
{
    cout << "in function \n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    // int a;
    // cout << "hello from the cpp program";
    // cin >> a;
    // int array[a];

    // for (int i = 0; i < a; i++)
    // {
    //     cout << "enter the" << i << "element";
    //     cin >> array[i];
    // }
    // for (int j = 0; j < a; j++)
    // {
    //     cout << array[j] << " ";
    // }
    // cout << endl;
    // cout << sizeof(array);

    // from here next phase (sorting);

    // int a;
    // cout << "enter the number";
    // cin >> a;
    // int array[a];
    // int smallestIndex = 0;
    // int largestindex = 0;
    // for (int i = 0; i <= a; i++)
    // {
    //     cout << "enter the " << i << " element";
    //     cin >> array[i];
    // }
    // for (int i = 0; i <= a; i++)
    // {
    //     if (array[i] < array[smallestIndex])
    //     {
    //         smallestIndex = i;
    //     }
    //     if (array[i] > array[largestindex])
    //     {
    //         largestindex = i;
    //     }
    // }
    // cout << "the smallest number is at " << smallestIndex << " index";
    // cout << endl;
    // cout << "the largest number is at" << largestindex << " index";

    // pass by reference

    int arr[] = {2, 3, 4, 5, 6, 7};
    // chageArray(arr, 6);
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << "in main \n";
    // for (int i = 0; i < size / sizeof(arr[0]); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == 6)
    //     {
    //         // cout << "the item is found at " << i;
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

        return 0;
}