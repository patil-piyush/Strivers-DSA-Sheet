// Last updated: 8/7/2026, 7:16:08 PM
class Solution {
    public static int fun(int[] dp, int ind){

        if(ind==0) return 1;
        if(ind<0) return 0;

        if(dp[ind] != -1) return dp[ind];

        int fs = fun(dp, ind-1);
        int ss = fun(dp, ind-2);

        return dp[ind] = fs+ss; 
    }
    
    public int climbStairs(int n) {
        int[] dp = new int[n+1];
        for(int i=0; i<n+1; i++){
            dp[i] = -1;
        }

        return fun(dp,n);
    }
}