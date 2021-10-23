class Solution
{
public:
    void calc(string digits, string cur, int index, vector<string> &res, vector<string> v)
    {
        if (index == digits.size())
        {
            res.push_back(cur);
            return;
        }
        int x = digits[index] - '0';
        for (int i = 0; i < v[x].size(); i++)
        {
            calc(digits, cur + v[x][i], index + 1, res, v);
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> res;
        if (digits.size() == 0)
        {
            return res;
        }
        vector<string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        calc(digits, "", 0, res, v);
        return res;
    }
};