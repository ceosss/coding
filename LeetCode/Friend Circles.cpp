class Solution
{
public:
    void mark(int i, vector<bool> &visited, vector<vector<int>> m)
    {
        visited[i] = true;
        for (int j = 0; j < m.size(); j++)
        {
            if (i != j && m[i][j] == 1 && !visited[j])
            {
                mark(j, visited, m);
            }
        }
    }
    int findCircleNum(vector<vector<int>> &m)
    {
        int n = m.size();
        int groups = 0;
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                groups++;
                mark(i, visited, m);
            }
        }
        return groups;
    }
};