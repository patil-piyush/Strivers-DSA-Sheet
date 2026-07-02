// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
  public:
    vector<int> ans;
    
    
    void trav(int i, vector<int>& vis, vector<vector<int>>& adj){
        if(!vis[i]){
            ans.push_back(i);
            vis[i] = 1;
            for(auto it: adj[i]){
                trav(it, vis, adj);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> vis(adj.size(),0);
        trav(0, vis, adj);
        return ans;
    }
};