// Last updated: 8/7/2026, 7:05:55 PM
class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int maxA = 50000;
        vector<int> freq(maxA + 1, 0);

        for (int x : nums) freq[x]++;

        // count numbers divisible by g
        vector<long long> cnt(maxA + 1, 0);
        for (int g = 1; g <= maxA; g++) {
            for (int m = g; m <= maxA; m += g) {
                cnt[g] += freq[m];
            }
        }

        // pairs[g] = number of pairs with gcd = g
        vector<long long> pairs(maxA + 1, 0);
        for (int g = maxA; g >= 1; g--) {
            pairs[g] = cnt[g] * (cnt[g] - 1) / 2;
            for (int m = 2 * g; m <= maxA; m += g) {
                pairs[g] -= pairs[m];
            }
        }

        // prefix sum
        vector<long long> prefix(maxA + 1, 0);
        for (int g = 1; g <= maxA; g++) {
            prefix[g] = prefix[g - 1] + pairs[g];
        }

        vector<int> ans;
        for (long long q : queries) {
            int g = lower_bound(prefix.begin(), prefix.end(), q + 1) - prefix.begin();
            ans.push_back(g);
        }

        return ans;
    }
};