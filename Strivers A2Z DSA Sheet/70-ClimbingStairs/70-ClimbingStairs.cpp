// Last updated: 8/7/2026, 7:16:14 PM
class Solution {
public:
    int fun(int ind, vector<int>& dp){

        if(ind == 0) return 1;
        if(ind < 0) return 0;

        if(dp[ind] != -1) return dp[ind];

        int fs = fun(ind-1, dp);
        int ss = fun(ind-2, dp);

        return dp[ind] = fs + ss;
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);

        return fun(n, dp);
    }
};