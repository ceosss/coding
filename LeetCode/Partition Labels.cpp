class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        int n = s.length();
        unordered_map<char, int> last;
        for (int i = 0; i < n; i++)
        {
            last[s[i]] = i;
        }
        int start = 0;
        int end = 0;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (last[s[i]] > end)
            {
                end = last[s[i]];
            }
            if (i == end)
            {
                res.push_back(end - start + 1);
                start = i + 1;
                end = i + 1;
            }
        }
        return res;
    }
};