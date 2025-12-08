#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // if strs is empty retun empty string 
        if (strs.empty())
            return "";

        // sort the list os strings lexicographically
        sort(strs.begin(), strs.end());

        // take first and last string and compare them
        string first = strs[0];
        string last = strs[strs.size() - 1];
        string ans = "";
        int minLength = min(first.size(), last.size());

        // compare each letter, where the first letter differs the common substring ends 
        for (int i = 0; i < minLength; i++)
        {
            if (first[i] != last[i])
                break;

            ans += first[i];
        }
        //return the longest common prefix
        return ans;
    }
};