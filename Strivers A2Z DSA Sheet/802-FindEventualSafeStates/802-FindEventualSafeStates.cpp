// Last updated: 9/8/2026, 2:37:09 PM
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> indegree(n,0);
        vector<vector<int>> adjRev(n);
        for(int i=0; i<n; i++){
            for(auto it: graph[i]){
                adjRev[it].push_back(i);
                indegree[i]++;
            }
        }            

        queue<int> q;
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(indegree[i]==0) q.push(i);
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for(auto it: adjRev[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};