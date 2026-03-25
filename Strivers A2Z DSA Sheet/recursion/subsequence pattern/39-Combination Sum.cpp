#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<vector<int>> result;

public:
    void combination(vector<int> &candidates, vector<int> &ds, int index, int target)
    {

        if (target == 0)
        {
            result.push_back(ds);
            return;
        }

        if (index == candidates.size())
        {
            return;
        }

        if (target >= candidates[index])
        {
            ds.push_back(candidates[index]);
            combination(candidates, ds, index, target - candidates[index]);
            ds.pop_back();
        }

        combination(candidates, ds, index + 1, target);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> ds;
        combination(candidates, ds, 0, target);
        return result;
    }
};

int main()
{

    return 0;
}