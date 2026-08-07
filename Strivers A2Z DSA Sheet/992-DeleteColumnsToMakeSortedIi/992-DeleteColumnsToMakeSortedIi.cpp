// Last updated: 8/7/2026, 7:10:12 PM
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();

        int deletions = 0;

        vector<bool> sorted(n - 1, false);

        for (int col = 0; col < m; col++) {
            bool bad = false;

            for (int row = 0; row < n - 1; row++) {
                if (!sorted[row] && strs[row][col] > strs[row + 1][col]) {
                    bad = true;
                    deletions++;
                    break;
                }
            }

            if (bad) continue;

            for (int row = 0; row < n - 1; row++) {
                if (!sorted[row] && strs[row][col] < strs[row + 1][col]) {
                    sorted[row] = true;
                }
            }
        }

        return deletions;
    }
};