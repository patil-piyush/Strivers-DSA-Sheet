// Last updated: 8/10/2026, 2:09:33 PM
1class Solution {
2public:
3    static constexpr int MAX = 100000;
4    inline static bitset<MAX + 1> dp;
5
6    inline static bool init = []() {
7        for (int i = 0; i <= MAX; i++) {
8            if (dp.test(i)) continue;
9            for (int j = 1; j * j <= MAX - i; j++)
10                dp.set(i + j * j);
11        }
12        
13        return false;
14    }();
15
16    bool winnerSquareGame(int n) { return dp.test(n); }
17};