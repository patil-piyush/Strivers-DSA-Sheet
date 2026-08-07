// Last updated: 8/7/2026, 7:04:56 PM
class Fenwick {
public:
    vector<int> bit;

    Fenwick(int n) {
        bit.assign(n + 1, 0);
    }

    void update(int idx, int val) {
        while (idx < bit.size()) {
            bit[idx] += val;
            idx += idx & (-idx);
        }
    }

    int query(int idx) {
        int sum = 0;
        while (idx > 0) {
            sum += bit[idx];
            idx -= idx & (-idx);
        }
        return sum;
    }
};

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        // Convert to +1 / -1
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                nums[i] = 1;
                found = true;
            } else {
                nums[i] = -1;
            }
        }

        if (!found) return 0;

        // Prefix sums
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + nums[i - 1];
        }

        // Coordinate Compression
        vector<int> comp = pref;
        sort(comp.begin(), comp.end());
        comp.erase(unique(comp.begin(), comp.end()), comp.end());

        Fenwick bit(comp.size());

        long long ans = 0;

        for (int x : pref) {

            // compressed index (1-based)
            int idx = lower_bound(comp.begin(), comp.end(), x) - comp.begin() + 1;

            // Count previous prefix sums < current prefix sum
            ans += bit.query(idx - 1);

            // Insert current prefix sum
            bit.update(idx, 1);
        }

        return ans;
    }
};