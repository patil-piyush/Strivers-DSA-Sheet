// Last updated: 9/8/2026, 2:34:44 PM
class Solution {
    public static int gcd(int a, int b){
        if(a==0) return b;
        else return gcd(b%a,a);
    }
    public boolean isGoodArray(int[] nums) {
        int currGCD = nums[0];
        for(int i=0; i<nums.length; i++){
            currGCD = gcd(currGCD, nums[i]);
            if(currGCD == 1) return true;
        }
        return (currGCD == 1);
    }
};