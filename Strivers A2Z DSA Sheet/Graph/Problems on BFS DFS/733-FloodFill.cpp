class Solution
{
public:
    void dfs(int sr, int sc, vector<vector<int>> &image, int color, int prevcolor, vector<vector<bool>> &vis)
    {
        int n = image.size();
        int m = image[0].size();
        if (sr > n - 1 || sc > m - 1 || sr < 0 || sc < 0)
            return;
        if (!vis[sr][sc])
        {
            vis[sr][sc] = true;
            if (image[sr][sc] == prevcolor)
                image[sr][sc] = color;
            else
                return;
            dfs(sr - 1, sc, image, color, prevcolor, vis);
            dfs(sr + 1, sc, image, color, prevcolor, vis);
            dfs(sr, sc - 1, image, color, prevcolor, vis);
            dfs(sr, sc + 1, image, color, prevcolor, vis);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int prevcolor = image[sr][sc];
        vector<vector<bool>> vis(image.size(), vector<bool>(image[0].size(), false));
        dfs(sr, sc, image, color, prevcolor, vis);
        return image;
    }
};