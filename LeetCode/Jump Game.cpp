class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        int cur = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > cur)
            {
                return false;
            }
            cur = max(cur, i + nums[i]);
        }
        return true;
    }
};