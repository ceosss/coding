class Solution
{
public:
    bool bfs(int cur, vector<bool> &visited, vector<int> adj[])
    {
        queue<pair<int, int> > q; // <cur,prev>
        q.push({cur, -1});
        visited[cur] = true;

        while (!q.empty())
        {
            cur = q.front().first;
            int prev = q.front().second;
            q.pop();
            for (auto j : adj[cur])
            {
                if (!visited[j])
                {
                    visited[j] = true;
                    q.push({j, cur});
                }
                else if (j != prev)
                    return true;
            }
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
                if (bfs(i, visited, adj))
                    return true;
            }
        }
        return false;
    }
};