// Last updated: 8/7/2026, 7:04:36 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> freq;
        int dupCount = 0;

        // Build frequency map
        for (int x : nums) {
            freq[x]++;
            if (freq[x] == 2) dupCount++;
        }

        int ops = 0;
        int i = 0;
        int n = nums.size();

        // Remove prefix in chunks of 3
        while (i < n && dupCount > 0) {
            ops++;

            for (int k = 0; k < 3 && i < n; k++, i++) {
                int val = nums[i];
                if (freq[val] == 2) dupCount--; // duplicate resolved
                freq[val]--;
            }
        }

        return ops;
    }
};