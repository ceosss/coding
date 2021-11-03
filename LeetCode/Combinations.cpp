class Solution
{
public:
    void find(int start, int n, int k, vector<int> cur, vector<vector<int>> &res)
    {
        if (cur.size() == k)
        {
            res.push_back(cur);
            return;
        }
        for (int i = start; i <= n; i++)
        {
            cur.push_back(i);
            find(i + 1, n, k, cur, res);
            cur.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> res;
        vector<int> cur;
        find(1, n, k, cur, res);
        return res;
    }
};