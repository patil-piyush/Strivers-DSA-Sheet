#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int pg = 0, ps = 0, count = 0;
        while (pg < g.size() && ps < s.size())
        {
            if (g[pg] <= s[ps])
            {
                ps++;
                pg++;
                count++;
            }
            else if (g[pg] > s[ps])
            {
                ps++;
            }
        }
        return count;
    }
};