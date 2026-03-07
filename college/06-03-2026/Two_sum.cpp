// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;



/*
// brute force solution
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> pair;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (pair.find(target - num) != pair.end())
            {
                return {i, pair[target - num]};
            }
            pair[num] = i;
        }
        return {};
    }
};

*/

// optimal solution using hash map
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> pair;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (pair.find(target - num) != pair.end())
            {
                return {i, pair[target - num]};
            }
            pair[num] = i;
        }
        return {};
    }
};
