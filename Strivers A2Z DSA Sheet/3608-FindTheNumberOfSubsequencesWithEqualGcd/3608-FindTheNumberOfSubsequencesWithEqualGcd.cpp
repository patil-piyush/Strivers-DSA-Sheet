// Last updated: 8/7/2026, 7:05:52 PM
class Solution {
public:
    int MOD = 1e9 + 7;

    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

    long long solve(vector<int>& nums, int idx, int gcd1, int gcd2, int n,
                    vector<vector<vector<int>>>& memo) {
        if (idx == n)
            return (gcd1 != 0 && gcd2 != 0 && gcd1 == gcd2);

        if (memo[idx][gcd1][gcd2] != -1)
            return memo[idx][gcd1][gcd2];

        // 3 cases

        // skip
        long long skip = solve(nums, idx + 1, gcd1, gcd2, n, memo);

        // add to 1
        long long add1 =
            solve(nums, idx + 1, gcd(gcd1, nums[idx]), gcd2, n, memo);

        // add to 2
        long long add2 =
            solve(nums, idx + 1, gcd1, gcd(gcd2, nums[idx]), n, memo);


        return memo[idx][gcd1][gcd2] = (skip + add1 + add2) % MOD;
    }

    int subsequencePairCount(vector<int>& nums) {
        int n = nums.size();

        vector<vector<vector<int>>> memo(
            n, vector<vector<int>>(200 + 1, vector<int>(200 + 1, -1)));

        return solve(nums, 0, 0, 0, n, memo);
    }
};