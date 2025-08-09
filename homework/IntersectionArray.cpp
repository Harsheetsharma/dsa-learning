#include <iostream>
#include <vector>
using namespace std;

void calculateIntersectionOfArray(int arr1[], int arr2[], int size, int size1)
{

    int array3[size] = {};
    int index = 0;
    int *pointer1 = &array3[0];
    int sizeOfArray3 = sizeof(array3) / sizeof(array3[0]);
    int *pointer2 = &array3[sizeOfArray3 - 1];

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size1; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
                if (count == 1)
                {
                    bool alreadyInserted = false;
                    for (int k = 0; k < sizeOfArray3; k++)
                    {
                        if (array3[k] == arr1[i])
                        {
                            alreadyInserted = true;
                            break;
                        }
                    }
                    if (!alreadyInserted)
                    {
                        array3[index++] = arr1[i];
                    }
                }
            }
        }
    }

    for (int i = 0; i < index; i++)
    {
        cout << array3[i];
    }
}

int main()
{
    int arr1[] = {2, 3, 4, 8, 7, 8};
    int arr2[] = {7, 8, 5, 3, 1, 2};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int size1 = sizeof(arr2) / sizeof(arr2[0]);
    calculateIntersectionOfArray(arr1, arr2, size, size1);
    return 0;
}