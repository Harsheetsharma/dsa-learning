#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

// sliding window pattern usig hashmap and two pointer to check largest
// substring in given string

void LongestSubstringWithNoRepeatChar(string str)
{
    int left = 0;
    int maxlength = 0;
    unordered_map<char, int> mp;

    for (int right = 0; right < str.length(); right++)
    {

        if (mp.find(str[right]) != mp.end() && mp[str[right]] >= left)
        {
            left = mp[str[right]] + 1;
        }
        mp[str[right]] = right;

        // Update maximum length
        maxlength = max(maxlength, right - left + 1);
    }
    cout << "the longest substring is = " << maxlength;
}

int main()
{
    string str = "aaabbach";
    LongestSubstringWithNoRepeatChar(str);
    return 0;
}