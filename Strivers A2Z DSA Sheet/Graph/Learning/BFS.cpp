// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int> ans;
        int n = adj.size();
        queue<int> q;
        vector<int> visited(n,0);
        q.push(0);
        while(!q.empty()){
            int i=q.front();
            q.pop();
            if(!visited[i]){
                ans.push_back(i);
                int m = adj[i].size();
                for(int j=0; j<m; j++){
                    q.push(adj[i][j]);
                }
                visited[i] = 1;
            }
        }
        
        return ans;
    }
};