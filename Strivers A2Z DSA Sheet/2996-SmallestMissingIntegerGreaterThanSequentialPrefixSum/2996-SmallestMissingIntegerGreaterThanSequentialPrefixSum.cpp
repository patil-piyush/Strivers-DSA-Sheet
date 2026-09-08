// Last updated: 9/8/2026, 2:29:42 PM
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sequentialSum = nums[0];
        int n = nums.size();
        // max vector size = 50, max sum will occur when full array is
        // sequential -> form =[1,2,3...,50] Sum= n*(n+1)/2=>12575
        vector<bool> freq(1276, 0);
        freq[nums[0]]=1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sequentialSum += nums[i];
                freq[nums[i]] = 1;
            } else {
                while (i < n) {
                    freq[nums[i]] = 1;
                    i++;
                }
            }
        }
        int ans;
        for (int i = sequentialSum; i < 1277; i++) {
            if (freq[i] == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};