//

#include <bits/stdc++.h>
using namespace std;

// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// brute force approach
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxsum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum = sum + nums[j];
                maxsum = max(sum, maxsum);
            }
        }
        return maxsum;
    }
};

// better approach - deciding at each index whether to include the current element in the sum or not
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        return solve(nums, 0, false);
    }
    int solve(vector<int> &A, int i, bool mustPick)
    {
        // our subarray must contain atleast 1 element. If mustPick is false at end means no element is picked and this is not valid case
        if (i >= size(A))
            return mustPick ? 0 : -1e5;
        if (mustPick)
            return max(0, A[i] + solve(A, i + 1, true));                  // either stop here or choose current element and recurse
        return max(solve(A, i + 1, false), A[i] + solve(A, i + 1, true)); // try both choosing current element or not choosing
    }
};



// optimal approach  - using DP memoization technique

int main()
{

    return 0;
}