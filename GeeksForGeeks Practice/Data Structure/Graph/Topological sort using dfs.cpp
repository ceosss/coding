class Solution
{
public:
    //Function to return list containing vertices in Topological order.
    void dfs(int cur, vector<bool> &visited, stack<int> &s, vector<int> adj[])
    {
        visited[cur] = true;
        for (auto j : adj[cur])
        {
            if (!visited[j])
            {
                dfs(j, visited, s, adj);
            }
        }
        s.push(cur);
    }
    vector<int> topoSort(int v, vector<int> adj[])
    {
        stack<int> s;
        vector<bool> visited(v, false);
        vector<int> res;

        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                dfs(i, visited, s, adj);
            }
        }

        while (!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
};