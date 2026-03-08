// https://leetcode.com/problems/missing-number/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        int result = (n * (n + 1) / 2) - sum;
        return result;
    }
};

int main()
{

    return 0;
}