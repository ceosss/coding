class Solution
{
public:
    //Function to return list containing vertices in Topological order.
    vector<int> topoSort(int v, vector<int> adj[])
    {
        vector<int> in(v, 0);
        vector<int> res;
        queue<int> q;

        for (int i = 0; i < v; i++)
        {
            for (auto j : adj[i])
            {
                in[j]++;
            }
        }

        for (int i = 0; i < v; i++)
        {
            if (in[i] == 0)
            {
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            res.push_back(cur);
            for (auto j : adj[cur])
            {
                in[j]--;
                if (in[j] == 0)
                    q.push(j);
            }
        }
        return res;
    }
};