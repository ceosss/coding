class Solution
{
public:
    void dfs(vector<vector<char> > &grid, int m, int n, int i, int j)
    {
        // check if we overstepped the boundary or if it's not a land
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != '1')
        {
            return;
        }

        // mark as visited
        grid[i][j] = '2';

        // visit neighbours
        dfs(grid, m, n, i - 1, j);
        dfs(grid, m, n, i + 1, j);
        dfs(grid, m, n, i, j - 1);
        dfs(grid, m, n, i, j + 1);
    }
    int numIslands(vector<vector<char> > &grid)
    {
        // if grid is empty, return 0 island
        if (grid.size() == 0)
        {
            return 0;
        }

        int count = 0;
        int m = grid.size();
        int n = grid[0].size();

        // traverse through entire grid
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                // if it's a land, increment count, go to dfs and mark all neighbours as visited, ie '2'
                if (grid[i][j] == '1')
                {
                    count++;
                    dfs(grid, m, n, i, j);
                }
            }
        }
        return count;
    }
};