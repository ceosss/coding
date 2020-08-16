class Solution
{
public:
    vector<int> runningSum(vector<int> &a)
    {
        vector<int> b;
        b.push_back(a[0]);
        for (int i = 1; i < a.size(); i++)
        {
            b.push_back(a[i] + b[i - 1]);
        }
        return b;
    }
};