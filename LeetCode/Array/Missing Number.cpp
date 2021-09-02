class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        // TC - o(n)
        int n = nums.size();
        int sum_original = (n * (n + 1)) / 2;
        int sum_found = 0;
        for (auto i : nums)
            sum_found += i;
        return sum_original - sum_found;
        // TC - o(n^2)
        // int n = nums.size();
        // for(int i=0;i<=n;i++)
        // {
        //     bool found = false;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]==i){
        //             found = true;
        //             goto check;
        //         }
        //     }
        //     check:
        //     if(!found)
        //         return i;
        // }
        // return -1;
    }
};