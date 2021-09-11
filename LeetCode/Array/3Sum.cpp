class Solution
{
public:
    vector<vector<int> > threeSum(vector<int> &nums)
    {
        // TC - o(n^2)
        // SC - o(1)
        vector<vector<int> > res;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int a = -nums[i];
            int start = i + 1;
            int end = n - 1;
            while (start < end)
            {
                if (nums[start] + nums[end] > a)
                {
                    end--;
                }
                else if (nums[start] + nums[end] < a)
                {
                    start++;
                }
                else
                {
                    vector<int> cur;
                    int b = nums[start];
                    int c = nums[end];
                    cur.push_back(nums[i]);
                    cur.push_back(b);
                    cur.push_back(c);
                    res.push_back(cur);

                    while (start < end && nums[start] == b)
                        start++;
                    while (start < end && nums[end] == c)
                        end--;
                }
            }
        }
        return res;
    }
};