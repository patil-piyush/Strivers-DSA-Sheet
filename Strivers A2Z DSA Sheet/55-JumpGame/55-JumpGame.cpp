// Last updated: 8/7/2026, 7:16:31 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = 0;
        for(int i=0; i<nums.size(); i++){
            if(i>maxi) return false;
            maxi = max(maxi, i+nums[i]);
        }
        return true;
    }
};