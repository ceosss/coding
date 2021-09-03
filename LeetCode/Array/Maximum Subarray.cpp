class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // kadane's algo
        // max(till i-1 + i, i);
        // TC - o(n)
        int m = nums[0];
        int cur = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            cur = max(cur + nums[i], nums[i]);
            m = max(m, cur);
        }
        return m;
    }
};