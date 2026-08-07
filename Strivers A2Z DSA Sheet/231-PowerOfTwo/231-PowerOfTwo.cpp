// Last updated: 8/7/2026, 7:13:15 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && ((n & (n-1))==0);
    }
};