class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        // TC - O(n)
        vector<int> res;
        vector<int> m(nums.size() + 1, 0);
        for (auto i : nums)
            m[i]++;
        for (int i = 1; i < nums.size() + 1; i++)
        {
            if (m[i] == 0)
                res.push_back(i);
        }
        return res;
    }
};