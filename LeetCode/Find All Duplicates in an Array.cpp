class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        // TC - o(n)
        // SC - o(1)
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            int x = abs(nums[i]) - 1;
            if (nums[x] < 0)
            {
                res.push_back(x + 1);
            }
            else
            {
                nums[x] *= -1;
            }
        }
        return res;
        // TC - o(n)
        // SC - o(n)
        // int n = nums.size();
        // unordered_map<int,int>m;
        // vector<int>res;
        // for(auto i: nums){
        //     m[i]++;
        //     if(m[i] > 1){
        //         res.push_back(i);
        //     }
        // }
        // return res;
    }
};