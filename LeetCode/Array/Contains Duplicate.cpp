class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // TC - o(n)
        unordered_map<int, bool> m;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m[nums[i]])
                return true;
            m[nums[i]] = true;
        }
        return false;
        // TC - o(n^2)
        // bool res = false;
        // int n = nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             res = true;
        //             break;
        //         }
        //     }
        // }
        // return res;
    }
};