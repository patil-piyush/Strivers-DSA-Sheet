// Last updated: 8/7/2026, 7:06:32 PM
class Solution {
public:
    vector<int> leftsum(vector<int>& nums) {
        vector<int> sum;
        int totalsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum.push_back(totalsum);
            totalsum += nums[i];
        }
        return sum;
    }
    vector<int> rightsum(vector<int>& nums) {
        vector<int> sum(nums.size());
        int totalsum = 0;

        for (int i = nums.size() - 1; i >= 0; i--) {
            sum[i] = totalsum;
            totalsum += nums[i];
        }

        return sum;
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        vector<int> lsum = leftsum(nums);
        vector<int> rsum = rightsum(nums);
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(abs(lsum[i] - rsum[i]));
        }
        return ans;
    }
};