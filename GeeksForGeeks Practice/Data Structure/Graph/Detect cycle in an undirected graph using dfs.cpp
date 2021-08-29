class Solution
{
public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int cur, int prev, vector<bool> &visited, vector<int> adj[])
    {
        visited[cur] = true;
        for (auto j : adj[cur])
        {
            if (!visited[j])
            {
                if (dfs(j, cur, visited, adj))
                    return true;
            }
            else if (j != prev)
                return true;
        }
        return false;
    }
    bool isCycle(int v, vector<int> adj[])
    {
        vector<bool> visited(v, false);
        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                if (dfs(i, -1, visited, adj))
                    return true;
            }
        }
        return false;
    }
};