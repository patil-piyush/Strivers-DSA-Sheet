// Last updated: 8/8/2026, 1:24:15 PM
1class Solution {
2public:
3
4    bool dfs(int n, vector<vector<int>>& adj,
5             int vis[], int pathvis[],
6             vector<int>& result) {
7
8        vis[n] = 1;
9        pathvis[n] = 1;
10
11        for(auto it : adj[n]) {
12
13            if(!vis[it]) {
14                if(dfs(it, adj, vis, pathvis, result))
15                    return true;
16            }
17            else if(pathvis[it]) {
18                return true;
19            }
20        }
21
22        pathvis[n] = 0;
23        result.push_back(n);
24
25        return false;
26    }
27
28    vector<int> findOrder(int numCourses,
29                          vector<vector<int>>& prerequisites) {
30
31        vector<vector<int>> adj(numCourses);
32
33        for(int i = 0; i < prerequisites.size(); i++) {
34            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
35        }
36
37        int vis[numCourses];
38        int pathvis[numCourses];
39
40        for(int i = 0; i < numCourses; i++) {
41            vis[i] = 0;
42            pathvis[i] = 0;
43        }
44
45        vector<int> result;
46
47        for(int i = 0; i < numCourses; i++) {
48
49            if(!vis[i]) {
50
51                if(dfs(i, adj, vis, pathvis, result)) {
52                    return {};
53                }
54            }
55        }
56
57        return result;
58    }
59};