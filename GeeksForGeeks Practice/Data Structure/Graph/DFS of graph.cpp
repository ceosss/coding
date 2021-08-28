class Solution
{
public:
    //Function to return Breadth First Traversal of given graph.
    void dfs(int i, vector<bool> &visited, vector<int> &res, vector<int> adj[])
    {
        visited[i] = true;
        res.push_back(i);
        for (auto j : adj[i])
        {
            if (!visited[j])
                dfs(j, visited, res, adj);
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[])
    {
        vector<bool> visited(v, false);
        vector<int> res;
        dfs(0, visited, res, adj);
        return res;
    }
};