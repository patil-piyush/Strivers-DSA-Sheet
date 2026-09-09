// Last updated: 9/9/2026, 10:52:00 PM
1class Solution {
2public:
3    int64_t countCommas(auto& n) {
4        int64_t count = 0;
5        for (int64_t p = 1000; p <= n; p *= 1000)
6            count += n - p + 1;
7
8        return count;
9    }
10};