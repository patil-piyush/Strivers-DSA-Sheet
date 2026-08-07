// Last updated: 8/7/2026, 7:09:55 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, r=0, maxlen=0, len=0, zero=0;
        while(r< nums.size()){
            if(nums[r] == 0) zero++;
            if(zero>k){
                if(nums[l] == 0) zero--;
                l++;
            }
            len = r-l+1;
            maxlen = max(len, maxlen);
            r++;
        }
        return maxlen;
    }
};