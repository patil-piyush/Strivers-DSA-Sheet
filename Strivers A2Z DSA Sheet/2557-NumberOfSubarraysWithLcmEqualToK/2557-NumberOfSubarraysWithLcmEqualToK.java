// Last updated: 8/7/2026, 7:06:45 PM
class Solution {
    public static int gcd(int a, int b){
        if(a==0) return b;
        else{
            return gcd(b%a,a);
        }
    }
    public static int lcm(int a, int b){
        return (a*b)/gcd(a,b);
    }
    public int subarrayLCM(int[] nums, int k) {
        int cnt=0;

        for(int i=0; i<nums.length; i++){
            int runningLCM = nums[i];
            for(int j=i; j<nums.length; j++){
                runningLCM = lcm(runningLCM, nums[j]);
                if(runningLCM == k) cnt++;
                if(runningLCM > k) break;
            }
        }

        return cnt;
    }
}