#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0;
        int r = height.size() - 1;
        int maxwater = 0;
        while (l < r)
        {
            int area = min(height[l], height[r]) * (r - l);
            maxwater = max(maxwater, area);
            if (height[l] <= height[r])
                l++;
            else
                r--;
        }
        return maxwater;
    }
};

int main()
{

    return 0;
}