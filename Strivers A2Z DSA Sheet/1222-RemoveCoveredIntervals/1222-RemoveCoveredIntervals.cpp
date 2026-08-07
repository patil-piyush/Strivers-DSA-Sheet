// Last updated: 8/7/2026, 7:09:25 PM
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) {
        int n = nums.size();
        if(n <= 1) return n;
        sort(nums.begin(), nums.end(), [](auto& v1, auto& v2){
            if(v1[0] == v2[0]){
                return v1[1] > v2[1];
            }
            return v1[0] < v2[0];
        });
        
        int cnt = n;
        int prev = nums[0][1];
        for(int i = 1; i<n; i++){
            if(prev >= nums[i][1]) cnt--;
            else{
                prev = nums[i][1];
            }
        }

        return cnt;
    }
};