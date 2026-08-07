// Last updated: 8/7/2026, 7:12:57 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        int result = (n*(n+1)/2) - sum;
        return result;
    }
};