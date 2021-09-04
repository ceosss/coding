class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;
        unordered_map<int, bool> m1;
        unordered_map<int, bool> m2;
        for (auto i : nums1)
            m1[i] = true;
        for (auto i : nums2)
            m2[i] = true;
        for (auto &i : m1)
        {
            if (i.second && m2[i.first])
            {
                res.push_back(i.first);
            }
        }
        return res;
    }
};