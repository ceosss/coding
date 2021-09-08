class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // 0  1  2  3  4
        // 1  3  4  2  2
        // 1 -3  4  2  2
        // 1 -3  4 -2  2
        // 1 -3  4 -2 -2
        // 1 -3 -4 -2 -2
        // TC - o(n)
        // SC - o(1)
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int x = abs(nums[i]);
            if (nums[x] < 0)
            {
                return x;
            }
            if (x >= 0 && x < n)
            {
                if (nums[x] > 0)
                {
                    nums[x] *= -1;
                }
            }
        }
        return n + 1;
        // TC - o(n)
        // SC - o(n)
        // unordered_map<int,int>m;
        // for(auto i: nums)
        // {
        //     m[i]++;
        //     if(m[i]>1){
        //         return i;
        //     }
        // }
        // return -1;
    }
};