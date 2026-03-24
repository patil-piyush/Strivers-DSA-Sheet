#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int sp = 0, tp = 0;
        while (sp < s.length() && tp < t.length())
        {
            if (s[sp] == t[tp])
            {
                sp++;
            }
            tp++;
        }
        if (sp == s.length())
            return true;
        return false;
    }
};

int main()
{

    return 0;
}