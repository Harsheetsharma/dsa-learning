#include <iostream>
using namespace std;
// WAF to calculate sum & product of all numbers in an array.
int main()
{

    int arr[] = {2, 3, 4, 5};
    int sum = 0;
    int prod = 1;
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        prod = prod * arr[i];
    }

    cout << sum << endl;
    cout << prod;

    return 0;
}
// Homework
// WAF to calculate sum & product of all numbers in an array.
// WAF to swap the max & min number of an array.
// WAF to print all the unique values in an array.
// WAF to print intersection of 2 arrays.