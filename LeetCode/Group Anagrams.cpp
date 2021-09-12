class Solution
{
public:
    vector<vector<string> > groupAnagrams(vector<string> &strs)
    {
        vector<vector<string> > res;
        unordered_map<string, vector<string> > m;
        for (auto i : strs)
        {
            string str = i;
            sort(str.begin(), str.end());
            m[str].push_back(i);
        }
        for (auto &i : m)
        {
            res.push_back(i.second);
        }
        return res;
    }
};