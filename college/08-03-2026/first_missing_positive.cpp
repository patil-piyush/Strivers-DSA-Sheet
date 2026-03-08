// https://leetcode.com/problems/first-missing-positive/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int i = 0;
        for (i; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
            {
                break;
            }
        }

        int target = 1;
        for (i; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                target++;
            }
            else if (nums[i] > target)
            {
                return target;
            }
        }
        return target;
    }
};

int main()
{

    return 0;
}