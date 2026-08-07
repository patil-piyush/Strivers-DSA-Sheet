// Last updated: 8/7/2026, 7:06:25 PM
class Solution {
public:
    void dfs(int i, vector<vector<int>>& adj, vector<int>& visited, int& nodes,
             int& edges) {
        visited[i] = 1;
        nodes++;
        edges += adj[i].size();
        for (int j = 0; j < adj[i].size(); j++) {
            if (visited[adj[i][j]] != 1) {
                dfs(adj[i][j], adj, visited, nodes, edges);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        int completeComponents = 0;
        vector<int> visited(n, 0);

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {

                int nodes = 0;
                int edges = 0;

                dfs(i, adj, visited, nodes, edges);

                edges /= 2;

                if (edges == nodes * (nodes - 1) / 2) {
                    completeComponents++;
                }
            }
        }
        return completeComponents;
    }
};