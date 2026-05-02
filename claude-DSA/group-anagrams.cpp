#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

// 49. Group Anagrams
// Medium
// Topics
// premium lock icon
// Companies
// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

// Explanation:

// There is no string in strs that can be rearranged to form "bat".
// The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
// The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
// Example 2:

// Input: strs = [""]

// Output: [[""]]

// Example 3:

// Input: strs = ["a"]

// Output: [["a"]]

vector<vector<string>> groupAnagrams(vector<string> &strs, int size)
{

    unordered_map<string, vector<string>> window;

    for (string s : strs)
    {
        string key = s;
        sort(key.begin(), key.end()); // creating key
        window[key].push_back(s);
    }
    vector<vector<string>> result;
    for (auto &pair : window)
    {
        result.push_back(pair.second);
    }

    return result;
}

int main()
{

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int size = sizeof(strs) / sizeof(strs[0]);
    vector<vector<string>> ans = groupAnagrams(strs, size);

    for (auto group : ans)
    {
        for (auto word : group)
        {
            cout << "[ " << word << " ]" << " ";
        }
        cout << endl;
    }

    return 0;
}