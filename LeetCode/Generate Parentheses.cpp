class Solution
{
public:
    void find(int open, int close, int n, string cur, vector<string> &res)
    {
        if (open + close == 2 * n)
        {
            res.push_back(cur);
            return;
        }
        if (open < n)
        {
            find(open + 1, close, n, cur + "(", res);
        }
        if (close < open)
        {
            find(open, close + 1, n, cur + ")", res);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        find(0, 0, n, "", res);
        return res;
    }
};