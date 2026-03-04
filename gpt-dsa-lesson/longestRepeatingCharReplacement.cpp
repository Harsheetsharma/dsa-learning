#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;
// problem is that find longest substring with repeat char which can be found by changing at most one char

void longestRepeatcharReplacement(string s, int k)
{
    unordered_map<char, int> window;
    int left = 0;
    int end = s.length() - 1;
    int maxfreq = 0;
    int maxlength = 0;
    for (int right = 0; right < s.length(); right++)
    {
        window[s[right]]++;

        maxfreq = max(maxfreq, window[s[right]]);
        while ((right - left + 1) - maxfreq > k)
        {
            window[s[left]]--;
            left++;
        }
        // for (auto &a : window)
        // {
        //     if (a.second <= 1) // means if frequency is greater than 1 then repeated
        //     {
        //         s[left] = a.first;
        //     }
        // }
        maxlength = max(maxlength, right - left + 1);
    }

    cout << "maxlength is = " << maxlength;
}

int main()
{
    string s = "aaabbs";
    int k = 1;
    longestRepeatcharReplacement(s, k);
    return 0;
}

// SIMULATION
//  //s = "aaabbs"
//  k = 1

// We track:

// left

// right

// window

// maxfreq

// window size

// maxlength

// 🔎 Start
// left = 0
// maxfreq = 0
// maxlength = 0
// window = {}
// ▶ right = 0 → 'a'
// window = {a:1}
// maxfreq = 1
// window size = 1
// replacements needed = 1 - 1 = 0  (valid)

// maxlength = 1

// ▶ right = 1 → 'a'
// window = {a:2}
// maxfreq = 2
// window size = 2
// replacements = 2 - 2 = 0  (valid)

// maxlength = 2

// ▶ right = 2 → 'a'
// window = {a:3}
// maxfreq = 3
// window size = 3
// replacements = 3 - 3 = 0  (valid)

// maxlength = 3

// ▶ right = 3 → 'b'
// window = {a:3, b:1}
// maxfreq = 3
// window size = 4
// replacements = 4 - 3 = 1  (valid, since k=1)

// maxlength = 4 ✅

// Current substring: "aaab"

// ▶ right = 4 → 'b'
// window = {a:3, b:2}
// maxfreq = 3
// window size = 5
// replacements = 5 - 3 = 2  (INVALID, > k)

// Now we shrink.

// Shrink once:

// Remove s[left] = 'a'

// window = {a:2, b:2}
// left = 1
// window size = 4
// replacements = 4 - 3 = 1  (valid now)

// maxlength stays 4

// ▶ right = 5 → 's'
// window = {a:2, b:2, s:1}
// maxfreq = 3   (we DO NOT decrease it)
// window size = 5
// replacements = 5 - 3 = 2  (INVALID)

// Shrink:

// Remove s[left] = 'a'

// window = {a:1, b:2, s:1}
// left = 2
// window size = 4
// replacements = 4 - 3 = 1  (valid)

// maxlength still 4

// ✅ Final Answer
// maxlength = 4