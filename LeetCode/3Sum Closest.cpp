class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int n = nums.size();
        int dif = INT_MAX;
        int res = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            int start = i + 1;
            int end = n - 1;
            while (start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];
                if (abs(sum - target) < dif)
                {
                    dif = abs(sum - target);
                    res = sum;
                }
                if (sum < target)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
        return res;
    }
};