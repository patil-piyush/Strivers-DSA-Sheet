// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

// brute force approach using two loops

// optimized approach using two pointers
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j)
        {
            if ((numbers[i] + numbers[j]) == target)
            {
                return {i + 1, j + 1};
            }
            else if ((numbers[i] + numbers[j]) > target)
            {
                j--;
            }
            else if ((numbers[i] + numbers[j]) < target)
            {
                i++;
            }
        }
        return {};
    }
};