#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

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



// solution - https://leetcode.com/problems/rotate-array/solutions/5550096/video-using-remainder-with-3-solutions-b-0rhv