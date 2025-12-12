#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    string frequencySort(string s)
    {
        // Frequency map for all ASCII chars
        vector<pair<int, char>> freq(128, {0, 0});

        // Fill with char labels
        for (int i = 0; i < 128; i++)
        {
            freq[i] = {0, (char)i};
        }

        // Count frequency
        for (char ch : s)
        {
            freq[ch].first++;
        }

        // Sort: frequency desc
        sort(freq.begin(), freq.end(), [](auto &a, auto &b)
             { return a.first > b.first; });

        // Build answer string
        string ans = "";
        for (auto &p : freq)
        {
            ans.append(p.first, p.second); // repeat character p.first times
        }

        return ans;
    }
};