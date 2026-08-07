// Last updated: 8/7/2026, 7:16:19 PM
class Solution {
public:
    int fun(int m, int n, int row, int col, vector<vector<int>> &dp){
        if(row >= m || col >= n){
            return 0;
        }
        if(row == m-1 && col == n-1){
            return 1;
        }

        if(dp[row][col] != -1) return dp[row][col];

        int l = fun(m,n,row+1,col,dp);
        int r = fun(m,n,row,col+1,dp);

        return dp[row][col] = l+r;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return fun(m,n,0,0,dp);
    }
};