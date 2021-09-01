class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int ans = 1;
        for (auto i : nums)
        {
            if (i == 0)
            {
                ans = 0;
                break;
            }
            else if (i < 0)
            {
                ans = -ans;
            }
        }
        return ans;
    }
};