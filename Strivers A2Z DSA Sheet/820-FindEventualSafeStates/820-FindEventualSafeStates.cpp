// Last updated: 8/8/2026, 3:20:52 PM
class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj,
             int vis[], int pathvis[],
             int check[]) {

        vis[node] = 1;
        pathvis[node] = 1;
        check[node] = 1;

        for(auto it : adj[node]) {

            if(!vis[it]) {
                if(dfs(it, adj, vis, pathvis, check)){
                    check[node] = 0;
                    return true;
                }
            }
            else if(pathvis[it]) {
                check[node] = 0;
                return true;
            }
        }

        pathvis[node] = 0;
        check[node] = 1;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        int vis[V];
        int pathvis[V];
        int check[V];
        for(int i = 0; i < V; i++) {
            vis[i] = 0;
            pathvis[i] = 0;
            check[i] = 0;
        }

        vector<int> result;

        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i, graph, vis, pathvis, check);
            }
        }

        for(int i=0; i<V; i++){
            if(check[i]==1) result.push_back(i);
        }

        return result;
    }
};