// #include <iostream>
// #include <algorithm>
// #include <unordered_map>
// #include <string>
// using namespace std;

// void logestsubstringnorepeat(string name)
// {
//     int left = 0;
//     int right = 0;

//     int maxLen = 0;
//     int startIndex = 0;
//     while (right < name.length())
//     {
//         bool found = false;
//         for (int i = left; i < right; i++)
//         {
//             if (name[i] == name[right])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (found)
//         {
//             left++;
//             continue;
//         }
//         else
//         {
//             if (right - left + 1 > maxLen)
//             {
//                 maxLen = right - left + 1;
//                 startIndex = left;
//             }

//             right++;
//         }
//     }
//     for (int i = startIndex; i < maxLen + startIndex; i++)
//     {
//         cout << name[i];
//     }
// }

// int main()
// {
//     string name = "abbacbrfh";
//     logestsubstringnorepeat(name);
//     return 0;
// }

#include <iostream>
#include <unordered_set>
using namespace std;

int longestSubstring(string s)
{
    int left = 0;
    int maxlen = 0;
    unordered_set<char> window;

    for (int right = 0; right < s.length(); right++)
    {
        while (window.count(s[right]))
        {
            window.erase(s[right]);
            left++;
        }
        window.insert(s[right]);

        maxlen = max(maxlen, right - left + 1);
    }
    return maxlen;
}

int main()
{
    string s = "abbacbrfh";
    cout << longestSubstring(s);
}