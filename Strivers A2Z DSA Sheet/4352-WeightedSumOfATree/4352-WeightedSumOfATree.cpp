// Last updated: 8/11/2026, 11:47:24 AM
class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        int n = parent.size();

        vector<vector<int>> children(n);

        // Build tree
        for (int i = 1; i < n; i++) {
            children[parent[i]].push_back(i);
        }

        vector<int> depth(n);
        int height = 0;

        function<void(int, int)> dfs = [&](int node, int d) {
            depth[node] = d;
            height = max(height, d);

            for (int child : children[node]) {
                dfs(child, d + 1);
            }
        };

        dfs(0, 1);

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            sum += 1LL * nums[i] * (height - depth[i] + 1);
        }

        return sum;
    }
};