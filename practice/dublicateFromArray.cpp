#include <iostream>
#include <algorithm>
using namespace std;

void checkDuplicate(int array[], int size)
{
    sort(array, array + size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;

    cout << "Without Duplicates: ";
    for (int i = 0; i < size; i++)
    {
        if (array[i] != array[i + 1])
            cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = {3, 1, 4, 2, 3, 2};
    int size = sizeof(array) / sizeof(array[0]);

    checkDuplicate(array, size);

    return 0;
}
