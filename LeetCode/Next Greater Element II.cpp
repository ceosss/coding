class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &a)
    {
        int n = a.size();
        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            int f = -1;
            for (int j = i + 1; j < 2 * n - 1; j++)
            {
                if (a[i] < a[j % n])
                {
                    f = a[j % n];
                    break;
                }
            }
            result.push_back(f);
        }
        return result;
    }
};