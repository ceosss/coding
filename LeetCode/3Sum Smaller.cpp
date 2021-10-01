class Solution
{
public:
    int threeSumSmaller(vector<int> &nums, int target)
    {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            int start = i + 1;
            int end = n - 1;
            while (start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];
                if (sum < target)
                {
                    count += end - start;
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
        return count;
    }
};