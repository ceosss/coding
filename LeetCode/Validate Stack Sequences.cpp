class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> stack;
        int n = pushed.size();
        int m = popped.size();
        int i = 0;
        int j = 0;
        while (i < m || j < n)
        {
            if (i < m)
            {
                stack.push(pushed[i]);
                i++;
            }
            else if (stack.top() != popped[j])
            {
                return false;
            }
            while (!stack.empty() && j < m && stack.top() == popped[j])
            {
                stack.pop();
                j++;
            }
        }
        return stack.empty();
    }
};