class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        // TC - o(n + klogn)
        // SC - o(n)
        int n = nums.size();
        priority_queue<int> pq;
        for (auto i : nums)
        {
            pq.push(i);
        }
        int x;
        while (k--)
        {
            x = pq.top();
            pq.pop();
        }
        return x;
        // TC - o(nlogn)
        // SC - o(1)
        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // k = n - k;
        // return nums[k];
    }
};