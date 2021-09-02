class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        // TC - o(n)
        unordered_map<int, int> m;
        int res = -1;
        for (auto i : nums)
            m[i]++;
        for (auto i : m)
        {
            if (i.second != 2)
            {
                res = i.first;
                break;
            }
        }
        return res;
    }
};