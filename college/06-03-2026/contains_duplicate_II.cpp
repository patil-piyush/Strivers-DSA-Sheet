// https://leetcode.com/problems/contains-duplicate-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        vector<pair<int, int>> pairs;
        for (int i = 0; i < nums.size(); i++)
        {
            pairs.push_back({nums[i], i});
        }
        sort(pairs.begin(), pairs.end());
        for (int i = 0; i < pairs.size() - 1; i++)
        {
            if (pairs[i].first == pairs[i + 1].first && abs(pairs[i].second - pairs[i + 1].second) <= k)
            {
                return true;
            }
        }
        return false;
    }
};