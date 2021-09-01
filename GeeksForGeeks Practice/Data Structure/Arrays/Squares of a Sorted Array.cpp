class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        // O(n)
        int start = 0;
        int end = nums.size() - 1;
        vector<int> res;
        while (start <= end)
        {
            int s = nums[start] * nums[start];
            int e = nums[end] * nums[end];
            if (s >= e)
            {
                res.push_back(s);
                start++;
            }
            else
            {
                res.push_back(e);
                end--;
            }
        }
        reverse(res.begin(), res.end());
        return res;
        // O(nlogn+n)
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
    }
};