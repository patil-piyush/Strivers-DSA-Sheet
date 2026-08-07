// Last updated: 8/7/2026, 7:13:29 PM
class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> list = new HashSet();
        for(int i:nums){
            if(list.add(i) == false) return true;
        }
        return false;
    }
}