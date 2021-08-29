class Solution
{
public:
    // bfs -> q -> col vector
    bool bfs(int cur, vector<int> &col, vector<int> adj[])
    {
        queue<int> q;
        col[cur] = 0;
        q.push(cur);
        while (!q.empty())
        {
            cur = q.front();
            q.pop();
            for (auto j : adj[cur])
            {
                if (col[j] == -1)
                {
                    col[j] = 1 - col[cur];
                    q.push(j);
                }
                else if (col[j] == col[cur])
                    return false;
            }
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
                if (!bfs(i, col, adj))
                    return false;
            }
        }
        return true;
    }
};