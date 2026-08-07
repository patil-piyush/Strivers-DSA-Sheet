// Last updated: 8/7/2026, 7:14:52 PM
class Solution {
    public int singleNumber(int[] nums) {
        int j=0;
        for(int i:nums) j = j^i;
        return j; 
    }
}