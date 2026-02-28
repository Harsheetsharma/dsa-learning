#include <iostream>
#include <unordered_map>

using namespace std;

// Longest substring with at most K distinct characters

// Rules:
// Use unordered_map<char,int>
// Maintain left, right
// Maintain distinct
// Shrink when distinct > k
// Track maxLen

void longestSubstringWithAtMostKdistinctChar(string s, int k)
{
    int left = 0;
    int maxlength = 0;
    int startIndex = 0;
    unordered_map<char, int> window;

    for (int right = 0; right < s.length(); right++)
    {
        window[s[right]]++; // this line here pushes distinct chars in window
        while (window.size() > k)
        {
            window[s[left]]--;
            if (window[s[left]] == 0)
            {
                window.erase(s[left]);
            }
            left++;
        }
        if (maxlength < right - left + 1)
        {
            maxlength = right - left + 1;
            startIndex = left;
        }
    }
    cout << maxlength;
    for (int i = startIndex; i < startIndex + maxlength; i++)
    {
        cout << s[i];
    }
}

int main()
{
    string s = "aabsbcdrqrtbis";
    int k = 4;
    longestSubstringWithAtMostKdistinctChar(s, k);
    return 0;
}