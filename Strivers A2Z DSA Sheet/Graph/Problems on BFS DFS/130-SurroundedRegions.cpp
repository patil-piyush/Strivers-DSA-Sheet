class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& board, vector<vector<bool>>& vis){
        int m = board.size();
        int n = board[0].size();

        if(i < 0 || j < 0 || i >= m || j >= n)
            return;

        if(vis[i][j] || board[i][j] == 'X')
            return;

        vis[i][j] = true;

        dfs(i+1,j,board,vis);
        dfs(i-1,j,board,vis);
        dfs(i,j+1,board,vis);
        dfs(i,j-1,board,vis);
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 || j == 0 || i == m-1 || j == n-1 && board[i][j] == 'O' && !vis[i][j]){
                    dfs(i,j,board,vis);
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(vis[i][j] == false && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
};