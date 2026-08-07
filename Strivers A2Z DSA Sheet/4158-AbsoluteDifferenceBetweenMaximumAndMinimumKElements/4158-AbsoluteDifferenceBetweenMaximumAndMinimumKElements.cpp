// Last updated: 8/7/2026, 7:04:39 PM
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int minSum = 0, maxSum = 0;
        for (int i = 0; i < k; i++) {
            minSum += nums[i];
        }

        for (int i = nums.size() - k; i < nums.size(); i++) {
            maxSum += nums[i];
        }

        return abs(maxSum - minSum);
    }
};