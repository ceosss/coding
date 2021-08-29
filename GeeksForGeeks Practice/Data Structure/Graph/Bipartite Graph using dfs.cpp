class Solution
{
public:
    bool dfs(int cur, int c, vector<int> &col, vector<int> adj[])
    {
        col[cur] = c;
        for (auto j : adj[cur])
        {
            if (col[j] == -1)
            {
                if (!dfs(j, 1 - c, col, adj))
                    return false;
            }
            else if (col[j] == col[cur])
                return false;
        }
        return true;
    }
    bool isBipartite(int v, vector<int> adj[])
    {
        vector<int> col(v, -1);
        for (int i = 0; i < v; i++)
        {
            if (col[i] == -1)
            {
                if (!dfs(i, 0, col, adj))
                    return false;
            }
        }
        return true;
    }
};