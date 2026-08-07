// Last updated: 8/7/2026, 7:10:01 PM
class Solution {
    public static int fun(int n, int dp[]){
        if(n <= 1) return n;
        if(dp[n]!=-1) return dp[n];
        int i = fun(n-1,dp);
        int j = fun(n-2,dp);

        return dp[n] = i+j;
    }

    public int fib(int n) {
        int dp[] = new int[n+1];
        Arrays.fill(dp, -1);
        return fun(n, dp);
    }
}