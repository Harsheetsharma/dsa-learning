#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void devidestringevenly(string s)
{
    int left = 0;
    unordered_map<int, string> window;

    int partSize = s.size() / 3;
    for (int right = 0; right < 3; right++)
    {
        // window[s[right]]++;
        if (s.length() % 2 == 0)
        {
            window[right] = s.substr(right * partSize, partSize);
        }
        else
        {
            window[right] = s.substr(right * partSize, partSize - 1);
        }
    }
    for (auto &p : window)
    {
        cout << p.first << "" << p.second << endl;
    }
}

int main()
{
    string s = "abdncde";
    devidestringevenly(s);
    return 0;
}