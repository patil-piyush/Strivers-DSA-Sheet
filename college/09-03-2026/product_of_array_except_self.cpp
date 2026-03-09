// https://leetcode.com/problems/product-of-array-except-self/

#include <bits/stdc++.h>
using namespace std;


// optimal solution among 4 solutions, time complexity O(n) and space complexity O(1) (excluding output array)
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> output(nums.size(), 1);

        int left = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            output[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            output[i] *= right;
            right *= nums[i];
        }

        return output;
    }
};

int main()
{

    return 0;
}