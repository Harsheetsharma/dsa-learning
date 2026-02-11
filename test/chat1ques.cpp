#include <iostream>
using namespace std;
// program to find the number at which space;
int findOccurance(int array[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    // Write C++ code here
    int array[] = {2, 5, 7, 8, 10};
    int target = 8;
    int size = sizeof(array) / sizeof(array[0]);
    int answer = findOccurance(array, target, size);
    cout << answer;
    return 0;
}