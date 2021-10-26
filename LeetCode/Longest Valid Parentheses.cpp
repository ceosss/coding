class Solution
{
public:
    int longestValidParentheses(string s)
    {
        // TC - o(n)
        // SC - o(1)
        int n = s.length();
        if (n == 0)
        {
            return 0;
        }
        int res = 0;
        int open = 0;
        int close = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            if (open == close)
            {
                res = max(res, open + close);
            }
            if (close > open)
            {
                open = 0;
                close = 0;
            }
        }
        open = 0;
        close = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            if (open == close)
            {
                res = max(res, open + close);
            }
            if (open > close)
            {
                open = 0;
                close = 0;
            }
        }
        return res;
        // TC - o(n)
        // SC - o(n)
        // int n = s.length();
        // if (n == 0)
        // {
        //     return 0;
        // }
        // int res = 0;
        // stack<int> stack;
        // stack.push(-1);
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == '(')
        //     {
        //         stack.push(i);
        //     }
        //     else
        //     {
        //         stack.pop();
        //         if (stack.empty())
        //         {
        //             stack.push(i);
        //         }
        //         else
        //         {
        //             res = max(res, i - stack.top());
        //         }
        //     }
        // }
        // return res;
    }
};