#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

void palindromString(string str)
{
    string firstString = str;
    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    if (firstString == str)
    {
        cout << "the string is palindrome " << str;
    }
    else
    {
        cout << "string is not palindrome";
    }
}
int main()
{
    string str = "tenet";
    palindromString(str);
    return 0;
}