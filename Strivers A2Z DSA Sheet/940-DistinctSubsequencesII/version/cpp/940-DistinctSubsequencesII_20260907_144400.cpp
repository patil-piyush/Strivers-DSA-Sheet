// Last updated: 9/7/2026, 2:44:00 PM
1class Solution {
2    static constexpr int MOD = 1e9 + 7;
3
4public:
5    int distinctSubseqII(string s) {
6        int tot = 0, dp[26]{};
7
8        for (auto& c : s) {
9            c -= 'a';
10            int add = (tot - dp[c] + MOD) % MOD;
11            dp[c] = 1 + tot;
12            tot = (dp[c] + add) % MOD;
13        }
14
15        return tot;
16    }
17};