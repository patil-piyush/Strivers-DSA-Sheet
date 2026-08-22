// Last updated: 8/22/2026, 4:28:18 PM
1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int digitSum = 0;
5        int digitProduct = 1;
6        int original = n;
7
8        while (n > 0) {
9            int digit = n % 10;
10            n /= 10;
11
12            digitSum += digit;
13            digitProduct *= digit;
14        }
15
16        return original % (digitSum + digitProduct) == 0;
17    }
18};