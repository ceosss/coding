class Solution
{
public:
    void mark(int i, vector<bool> &visited, vector<vector<int> > isConnected)
    {
        visited[i] = true;
        for (int j = 0; j < isConnected.size(); j++)
        {
            if (i != j && isConnected[i][j] && !visited[j])
            {
                mark(j, visited, isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int> > &isConnected)
    {
        int provinces = 0;
        int n = isConnected.size();
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                provinces++;
                mark(i, visited, isConnected);
            }
        }
        return provinces;
    }
};