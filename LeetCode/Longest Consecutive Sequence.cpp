class Solution
{
public:
    // TC - o(n)
    // SC - o(n)
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        int longest = 1;
        unordered_map<int, bool> m;
        for (auto i : nums)
        {
            m[i] = true;
        }
        for (int i = 0; i < n; i++)
        {
            if (m.find(nums[i] - 1) != m.end())
            {
                continue;
            }
            int cur = 1;
            int x = nums[i] + 1;
            while (m.find(x) != m.end())
            {
                cur++;
                x++;
            }
            longest = max(longest, cur);
        }
        return longest;
    }
    // TC - o(nlogn)
    // SC - o(1)
    // int longestConsecutive(vector<int>& nums) {
    //     int n = nums.size();
    //     if(n == 0){
    //         return 0;
    //     }
    //     int longest = 1;
    //     int cur = 1;
    //     sort(nums.begin(),nums.end());
    //     for(int i = 0 ; i < n-1; i++){
    //         if(nums[i] != nums[i+1]){
    //             if(nums[i] == nums[i+1] - 1){
    //                 cur++;
    //             }else{
    //                 cur = 1;
    //             }
    //             longest = max(longest,cur);
    //         }
    //     }
    //     return longest;
    // }
};