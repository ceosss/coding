class Solution
{
public:
    void dfs(int i, int j, string s, int n, vector<string> &res, vector<vector<int> > &visited, vector<vector<int> > m)
    {
        if (i < 0 || j < 0 || i >= n || j >= n || m[i][j] == 0 || visited[i][j] == 1)
            return;

        if (i == n - 1 && j == n - 1)
        {
            res.push_back(s);
            return;
        }

        visited[i][j] = 1;

        dfs(i + 1, j, s + "D", n, res, visited, m);
        dfs(i, j - 1, s + "L", n, res, visited, m);
        dfs(i, j + 1, s + "R", n, res, visited, m);
        dfs(i - 1, j, s + "U", n, res, visited, m);

        visited[i][j] = 0;
    }
    vector<string> findPath(vector<vector<int> > &m, int n)
    {
        vector<string> res;

        if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
            return res;

        vector<vector<int> > visited(n, vector<int>(n, 0));
        dfs(0, 0, "", n, res, visited, m);
        return res;
    }
};
