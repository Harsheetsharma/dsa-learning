#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

void calculate3Sum(int array[], int size, int target)
{

    sort(array, array + size);
    int *firstPointer = &array[1];       // initialized with first index
    int *lastPointer = &array[size - 1]; // initialized with last index
    int fixed = 0;
    while (lastPointer > firstPointer)
    {
        int i = 0;
        fixed = array[i];
        int sum = *firstPointer + *lastPointer;
        int finalsum = fixed + sum;
        // int finalanswer1 = finalsum - 1;
        // int finalanswer2 = finalanswer1 + 1;
        if (finalsum == target - 1 || finalsum == target + 1 || finalsum == target)
        {
            cout << finalsum;
        }
        else
        {
            firstPointer++;
            lastPointer--;
        }
        i++;
    }
}

int main()
{
    int array[] = {-1, 2, 1, -4};
    int target = 1;
    int size = sizeof(array) / sizeof(array[0]);
    calculate3Sum(array, size, target);
    return 0;
}