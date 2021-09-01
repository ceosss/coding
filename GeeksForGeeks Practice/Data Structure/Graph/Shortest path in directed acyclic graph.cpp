class Solution
{
public:
    void topo(int cur, vector<bool> &visited, stack<int> &s, vector<vector<pair<int, int> > > adj)
    {
        visited[cur] = true;
        for (auto j : adj[cur])
        {
            if (!visited[j.first])
                topo(j.first, visited, s, adj);
        }
        s.push(cur);
    }
    void path(int v, int src, vector<vector<pair<int, int> > > adj)
    {
        stack<int> s;
        vector<bool> visited(v, false);
        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                topo(i, visited, s, adj);
            }
        }
        vector<int> dis(v, INT_MAX);
        dis[src] = 0;
        while (!s.empty())
        {
            int cur = s.top();
            s.pop();
            if (dis[cur] != INT_MAX)
            {
                for (auto j : adj[cur])
                {
                    if (dis[cur] + j.second < dis[j.first])
                    {
                        dis[j.first] = dis[cur] + j.second;
                    }
                }
            }
        }
        for (auto i : dis)
        {
            cout << i << " ";
        }
    }
}