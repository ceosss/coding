class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        // TC - o(n)
        // SC - o(1)
        int n = nums.size();
        int i = 0, j = 0;
        while (j < n)
        {
            if (nums[j] != 0)
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        // TC - o(n)
        // SC - o(1)
        // int n = nums.size();
        // int j = 0;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]!=0){
        //         nums[j++]=nums[i];
        //     }
        // }
        // while(j<n)
        // {
        //     nums[j++]=0;
        // }
    }
};