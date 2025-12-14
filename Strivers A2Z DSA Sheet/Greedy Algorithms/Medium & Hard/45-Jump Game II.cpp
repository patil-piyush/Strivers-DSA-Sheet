#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        int l = 0, r = 0, count = 0;

        while (r < n - 1)
        {
            int farthest = 0;
            for (int i = l; i <= r; i++)
            {
                farthest = max(farthest, i + nums[i]);
            }
            l = r + 1;
            count += 1;
            r = farthest;
        }
        return count;
    }
};