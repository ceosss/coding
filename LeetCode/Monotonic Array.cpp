class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int n = nums.size();
        int l1 = 0;
        int l2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] <= nums[i + 1])
            {
                l1++;
            }
            if (nums[i] >= nums[i + 1])
            {
                l2++;
            }
        }
        if (l1 == n - 1 || l2 == n - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};