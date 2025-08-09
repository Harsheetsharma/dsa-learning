#include <iostream>
#include <climits>
using namespace std;
// WAF to swap the max & min number of an array.

void cal(int arr[], int size)
{
    int largest = 0;
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = i;
        }
        if (smallest > arr[i])
        {
            smallest = i;
        }
    }
    cout << "the largest is " << largest << endl;
    cout << "the smallest is " << smallest << endl;
    swap(arr[smallest], arr[largest]);
}
int main()
{
    int arr[] = {2, 20, 5, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cal(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}