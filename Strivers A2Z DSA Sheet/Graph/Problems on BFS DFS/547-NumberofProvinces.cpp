class Solution
{
public:
    void dfs(int i, vector<vector<int>> &adj, vector<int> &vis)
    {
        vis[i] = 1;

        for (int j = 0; j < adj.size(); j++)
        {
            if (adj[i][j] == 1 && !vis[j])
            {
                dfs(j, adj, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>> &isConnected)
    {
        vector<int> vis(isConnected.size(), 0);

        int cnt = 0;
        for (int i = 0; i < isConnected.size(); i++)
        {
            if (!vis[i])
            {
                cnt++;
                dfs(i, isConnected, vis);
            }
        }
        return cnt;
    }
};