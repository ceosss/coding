class Solution
{
public:
    // TC - o(n^2)
    // SC - o(n^2)
    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size();
        if (m == 0)
        {
            return 0;
        }
        int n = grid[0].size();
        vector<vector<int>> cache(m, vector<int>(n, 0));
        cache[0][0] = grid[0][0];
        for (int i = 1; i < n; i++)
        {
            cache[0][i] = cache[0][i - 1] + grid[0][i];
        }
        for (int i = 1; i < m; i++)
        {
            cache[i][0] = cache[i - 1][0] + grid[i][0];
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cache[i][j] = grid[i][j] + min(cache[i - 1][j], cache[i][j - 1]);
            }
        }
        return cache[m - 1][n - 1];
    }
    // TC - o(n^2)
    // SC = o(1)
    // void find(int i, int j, int m, int n, vector<vector<int>>grid, int cur, int &res){
    //     if(i >= m || j >= n){
    //         return;
    //     }
    //     cur += grid[i][j];
    //     if(i == m-1 && j == n-1){
    //         res = min(res,cur);
    //         return;
    //     }
    //     find(i+1,j,m,n,grid,cur,res);
    //     find(i,j+1,m,n,grid,cur,res);
    // }
    // int minPathSum(vector<vector<int>>& grid) {
    //     int res = INT_MAX;
    //     int i = 0;
    //     int j = 0;
    //     int m = grid.size();
    //     int n = grid[0].size();
    //     find(i,j,m,n,grid,0,res);
    //     return res;
    // }
}