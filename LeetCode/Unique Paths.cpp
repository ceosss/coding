class Solution
{
public:
    int find(int i, int j, int m, int n, vector<vector<int>> &cache)
    {
        if (i >= m || j >= n)
        {
            return 0;
        }
        if (i == m - 1 && j == n - 1)
        {
            return 1;
        }
        if (cache[i][j] != -1)
        {
            return cache[i][j];
        }
        int x = find(i + 1, j, m, n, cache);
        int y = find(i, j + 1, m, n, cache);
        cache[i][j] = x + y;
        return cache[i][j];
    }
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> cache(m, vector<int>(n, -1));
        return find(0, 0, m, n, cache);
    }
};