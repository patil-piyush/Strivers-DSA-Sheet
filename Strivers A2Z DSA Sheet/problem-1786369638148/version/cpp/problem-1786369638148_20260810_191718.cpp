// Last updated: 8/10/2026, 7:17:18 PM
1class Solution {
2public:
3    long long weightedSum(vector<int>& parent, vector<int>& nums) {
4        int n = parent.size();
5
6        vector<vector<int>> children(n);
7
8        // Build tree
9        for (int i = 1; i < n; i++) {
10            children[parent[i]].push_back(i);
11        }
12
13        vector<int> depth(n);
14        int height = 0;
15
16        function<void(int, int)> dfs = [&](int node, int d) {
17            depth[node] = d;
18            height = max(height, d);
19
20            for (int child : children[node]) {
21                dfs(child, d + 1);
22            }
23        };
24
25        dfs(0, 1);
26
27        long long sum = 0;
28
29        for (int i = 0; i < n; i++) {
30            sum += 1LL * nums[i] * (height - depth[i] + 1);
31        }
32
33        return sum;
34    }
35};