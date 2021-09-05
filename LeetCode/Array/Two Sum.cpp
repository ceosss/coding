class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // TC - o(n)
        // SC - o(n)
        vector<int> res;
        unordered_map<int, int> m;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (m.find(target - nums[i]) != m.end())
            {
                res.push_back(i);
                res.push_back(m[target - nums[i]]);
                break;
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return res;
        // TC - o(n^2)
        // vector<int>res;
        // int n = nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             res.push_back(i);
        //             res.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return res;
    }
};