// Last updated: 8/7/2026, 7:08:10 PM
class Solution {
public:
    int maxDepth(string s) {
        int p = 0;
        int ans = 0;
        for (char x : s) {
            // Increase depth on open parenthesis
            if (x == '(')
                p++;
            // Decrease depth on close parenthesis
            else if (x == ')')
                p--;
            // Update maximum depth encountered
            ans = max(ans, p);
        }
        return ans;
    }
};