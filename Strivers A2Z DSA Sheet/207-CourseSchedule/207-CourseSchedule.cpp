// Last updated: 8/8/2026, 3:21:50 PM
class Solution {
public:

    bool detect(int curr,
                vector<vector<int>>& adj,
                vector<int>& vis,
                vector<int>& pathVis) {

        vis[curr] = 1;
        pathVis[curr] = 1;

        for (int adjnode : adj[curr]) {

            // Not visited
            if (vis[adjnode] == 0) {
                if (detect(adjnode, adj, vis, pathVis))
                    return true;
            }

            // Visited and still in current DFS path
            else if (pathVis[adjnode] == 1) {
                return true;
            }
        }

        // Remove from current DFS path
        pathVis[curr] = 0;

        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        for (auto& it : prerequisites) {
            adj[it[1]].push_back(it[0]);  // prerequisite -> course
        }

        vector<int> vis(numCourses, 0);
        vector<int> pathVis(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {

            if (vis[i] == 0) {

                // Cycle found
                if (detect(i, adj, vis, pathVis))
                    return false;
            }
        }

        // No cycle
        return true;
    }
};