// https://leetcode.com/problems/rotate-array/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void reverse(vector<int> &nums, int left, int right)
    {
        while (left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }

public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();

        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }
};

int main()
{

    return 0;
}