#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

// it is  a leetcode hard problem
// dynamic programming approach + greedy approach

class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int m = strs[0].size();
        vector<int> dp(m, 1);

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < i; j++)
            {
                bool ok = true;

                // Check if column j can come before column i
                for (const string &row : strs)
                {
                    if (row[j] > row[i])
                    {
                        ok = false;
                        break;
                    }
                }

                if (ok)
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        return m - *max_element(dp.begin(), dp.end());
    }
};