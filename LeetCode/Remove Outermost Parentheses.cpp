class Solution
{
public:
    string removeOuterParentheses(string s)
    {

        int n = s.length();
        string res = "";
        stack<char> a;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                a.push(s[i]);
            }
            else
            {
                if (s[i] == ')')
                {
                    if (a.size() != 1)
                    {
                        res += '(';
                        res += ')';
                    }
                    a.pop();
                }
            }
        }
        return res;
    }
};