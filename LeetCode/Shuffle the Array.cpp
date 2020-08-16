class Solution
{
public:
    vector<int> shuffle(vector<int> &a, int n)
    {
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            b.push_back(a[i]);
            b.push_back(a[i + n]);
        }
        return b;
    }
};
