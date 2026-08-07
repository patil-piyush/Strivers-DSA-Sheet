// Last updated: 8/7/2026, 7:08:33 PM
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count=0;
        bool isneg = false;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] < 0){
                    count+=n-j;
                    break;
                }
            }
        }
        return count;
    }
};