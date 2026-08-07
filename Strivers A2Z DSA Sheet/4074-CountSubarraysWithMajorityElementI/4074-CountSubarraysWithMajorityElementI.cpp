// Last updated: 8/7/2026, 7:04:59 PM
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
       int cnt = 0;
       int n = nums.size();
       for(int i=0; i<n; i++){
        int targetcnt = 0;
        for(int j=i; j<n; j++){
            if(nums[j] == target) targetcnt++;
            if(targetcnt*2 > j-i+1) cnt++;
        }
       }
       return cnt;
    }
};