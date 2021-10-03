vector<int> Solution::prevSmaller(vector<int> &a)
{
    int n = a.size();
    stack<int> s;
    vector<int> res(n, -1);
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() >= a[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            res[i] = -1;
        }
        else
        {
            res[i] = s.top();
        }
        s.push(a[i]);
    }
    return res;
}
