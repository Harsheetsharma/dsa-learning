

#include <iostream>
using namespace std;

int main()
{

    int array[] = {2, 3, 4, 5, 9, 3, 5, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int *firstPointer = array;          // stores the first index of array
    int *endPointer = &array[size - 1]; // stores the last index of array
    if (size % 2 == 0)
    {
        for (int i = 0; i < size; i++)
        {
            swap(firstPointer[i], endPointer[i]);
            if (firstPointer[i] > endPointer[i])
            {
                break;
            }
            firstPointer[i]++;
            endPointer[i]--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}