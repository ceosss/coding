class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int n = nums.size();
        int start = 0;
        int longest = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && nums[i] <= nums[i - 1])
            {
                start = i;
            }
            else
            {
                longest = max(longest, i - start + 1);
            }
        }
        return longest;
    }
};