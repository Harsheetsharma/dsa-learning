#include <iostream>
#include <unordered_set>
#include <stack>
using namespace std;

void leetcode20(string s)
{
    stack<char> window;
    for (int right = 0; right < s.length(); right++)
    {
        if (s[right] == '(' || s[right] == '[' || s[right] == '{')
        {
            window.push(s[right]);
        }
        else
        {
            if (window.empty())
            {
                cout << "FALSE";
            }
            char top = window.top();
            window.pop();

            if ((s[right] == ')' && top != '(') || (s[right] == ']' && top != '[') || (s[right] == '}' && top != '{'))
            {
                cout << "FALSE";
            }
            else
            {
                cout << "TRUE";
            }
        }
    }
}

int main()
{

    string s = "()";
    leetcode20(s);
    return 0;
}