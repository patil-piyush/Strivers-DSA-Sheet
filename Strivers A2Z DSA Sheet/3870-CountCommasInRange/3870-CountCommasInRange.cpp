// Last updated: 9/8/2026, 2:26:27 PM
class Solution {
public:
    int countCommas(int n) {
        int count = 0;

        for (int i = 1; i <= n; i++) {
            if (i >= 1000) {
                count++;
            }
        }

        return count;
    }
};