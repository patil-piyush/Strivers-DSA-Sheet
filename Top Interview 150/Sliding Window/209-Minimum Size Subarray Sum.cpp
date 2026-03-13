#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int minlen = INT_MAX;
        int l = 0, r = 0;
        int sum = 0;
        while (r < nums.size())
        {
            sum = sum + nums[r];
            while (sum >= target)
            {
                minlen = min(minlen, r - l + 1);
                sum = sum - nums[l];
                l++;
            }
            r++;
        }
        if (minlen == INT_MAX)
            return 0;
        return minlen;
    }
};

int main()
{

    return 0;
}