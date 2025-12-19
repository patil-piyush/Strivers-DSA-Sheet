#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int absDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int minSum = 0, maxSum = 0;
        for (int i = 0; i < k; i++)
        {
            minSum += nums[i];
        }

        for (int i = nums.size() - k; i < nums.size(); i++)
        {
            maxSum += nums[i];
        }

        return abs(maxSum - minSum);
    }
};