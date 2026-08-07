// Last updated: 8/7/2026, 7:13:46 PM
class Solution {
public:

    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis){
        vis[i][j] = 1;
        int n = grid.size();
        int m = grid[0].size();

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        for(int k=0; k<4; k++){
            int nrow = i+delrow[k];
            int ncol = j+delcol[k];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol] == 0 && grid[nrow][ncol]=='1')
                dfs(nrow, ncol, grid, vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m,0));


        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    cnt++;
                    dfs(i,j,grid,vis);
                }
            }
        }

        return cnt;
    }
};