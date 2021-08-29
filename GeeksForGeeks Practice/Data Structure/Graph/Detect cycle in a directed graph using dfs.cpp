class Solution
{
public:
    // Function to detect cycle in a directed graph.
    bool dfs(int cur, vector<bool> &visited, vector<bool> &sec, vector<int> adj[])
    {
        visited[cur] = true;
        sec[cur] = true;
        for (auto j : adj[cur])
        {
            if (!visited[j])
            {
                if (dfs(j, visited, sec, adj))
                    return true;
            }
            else if (visited[j] && sec[j])
                return true;
        }
        sec[cur] = false;
        return false;
    }
    bool isCyclic(int v, vector<int> adj[])
    {
        vector<bool> visited(v, false);
        vector<bool> sec(v, false);
        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
                if (dfs(i, visited, sec, adj))
                    return true;
        }
        return false;
    }
};