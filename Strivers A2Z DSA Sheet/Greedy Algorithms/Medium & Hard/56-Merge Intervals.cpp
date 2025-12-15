#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if (intervals.empty())
            return {};

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;
        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] <= end)
            {
                // overlap → merge
                end = max(end, intervals[i][1]);
            }
            else
            {
                // no overlap → save previous interval
                res.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        // push last interval
        res.push_back({start, end});
        return res;
    }
};
