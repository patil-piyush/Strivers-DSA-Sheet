// Last updated: 8/8/2026, 3:21:48 PM
class Solution {
public:

    bool dfs(int n, vector<vector<int>>& adj,
             int vis[], int pathvis[],
             vector<int>& result) {

        vis[n] = 1;
        pathvis[n] = 1;

        for(auto it : adj[n]) {

            if(!vis[it]) {
                if(dfs(it, adj, vis, pathvis, result))
                    return true;
            }
            else if(pathvis[it]) {
                return true;
            }
        }

        pathvis[n] = 0;
        result.push_back(n);

        return false;
    }

    vector<int> findOrder(int numCourses,
                          vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        for(int i = 0; i < prerequisites.size(); i++) {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        int vis[numCourses];
        int pathvis[numCourses];

        for(int i = 0; i < numCourses; i++) {
            vis[i] = 0;
            pathvis[i] = 0;
        }

        vector<int> result;

        for(int i = 0; i < numCourses; i++) {

            if(!vis[i]) {

                if(dfs(i, adj, vis, pathvis, result)) {
                    return {};
                }
            }
        }

        return result;
    }
};