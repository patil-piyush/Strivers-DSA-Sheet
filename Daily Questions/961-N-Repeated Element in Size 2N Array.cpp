#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

// optimal solution
class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (nums[i] == nums[i + 1] || nums[i] == nums[i + 2])
            {
                return nums[i];
            }
        }
        return nums.back();
    }
};

// my solution using sorting

// class Solution
// {
// public:
//     int repeatedNTimes(vector<int> &nums)
//     {
//         int n = nums.size() / 2;
//         sort(nums.begin(), nums.end());
//         int result = nums[0];
//         for (int i = 0; i < n * 2; i++)
//         {
//             if (nums[i] == nums[i + 1])
//             {
//                 result = nums[i];
//                 break;
//             }
//         }
//         return result;
//     }
// };