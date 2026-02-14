#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

bool isPalindrome(string &str, int left, int right)
{
    while (left < right)
    {
        if (str[left] != str[right])
        {

            return false;
        }
        left++;
        right--;
    }
    return true;
}

void validPalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;
    string temp;
    while (left < right)
    {
        if (str[left] == str[right])
        {
            left++;
            right--;
        }
        else
        {
            if (isPalindrome(str, left + 1, right) || isPalindrome(str, left, right - 1))
            {
                cout << "string can be palindrome by removing one character";
            }
            else
            {
                cout << "string cannot be palindrome by removing one character";
            }
            return;
        }
    }
    cout << "string is palindrome";
}
int main()
{
    string str = "abasc";
    validPalindrome(str);
    return 0;
}