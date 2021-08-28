class Solution
{
public:
    //Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[])
    {
        vector<int> res;
        vector<bool> visited(v, false);
        queue<int> q;
        q.push(0);
        visited[0] = true;
        while (!q.empty())
        {
            int i = q.front();
            q.pop();
            res.push_back(i);
            for (auto j : adj[i])
            {
                if (!visited[j])
                {
                    q.push(j);
                    visited[j] = true;
                }
            }
        }
        return res;
    }
};