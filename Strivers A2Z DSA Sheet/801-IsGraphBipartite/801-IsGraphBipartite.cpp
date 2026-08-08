// Last updated: 8/8/2026, 3:20:56 PM
class Solution {
public:
    bool dfs(int node, int c, vector<vector<int>>& graph, vector<int>& color) {
        color[node] = c;

        for (int adj : graph[node]) {
            if (color[adj] == -1) {
                if (!dfs(adj, 1 - c, graph, color))
                    return false;
            }
            else if (color[adj] == c) {
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);

        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                if (!dfs(i, 0, graph, color))
                    return false;
            }
        }
        return true;
    }
};