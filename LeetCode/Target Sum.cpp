class Solution
{
public:
    void calc(int cur, int index, int n, vector<int> &nums, int target, int &res)
    {
        if (index == n)
        {
            if (cur == target)
            {
                res++;
            }
            return;
        }
        calc(cur + nums[index], index + 1, n, nums, target, res);
        calc(cur - nums[index], index + 1, n, nums, target, res);
    }
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int res = 0;
        calc(0, 0, nums.size(), nums, target, res);
        return res;
    }
};