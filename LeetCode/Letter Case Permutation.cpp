class Solution
{
public:
    void cal(string s, int i, string res, vector<string> &ans)
    {
        if (i == s.length())
        {
            ans.push_back(res);
            return;
        }
        char ch = s[i];
        if (isdigit(ch))
        {
            cal(s, i + 1, res + ch, ans);
        }
        else
        {
            char ch1 = tolower(ch);
            char ch2 = toupper(ch);
            cal(s, i + 1, res + ch1, ans);
            cal(s, i + 1, res + ch2, ans);
        }
    }
    vector<string> letterCasePermutation(string s)
    {
        vector<string> ans;
        cal(s, 0, "", ans);
        return ans;
    }
};