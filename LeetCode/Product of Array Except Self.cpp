class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        // TC - o(n)
        // SC - o(1)
        int n = nums.size();
        vector<int> output(n, 0);
        output[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            output[i] = output[i - 1] * nums[i];
        }
        int prod = nums[n - 1];
        output[n - 1] = output[n - 2];
        for (int i = n - 2; i > 0; i--)
        {
            output[i] = output[i - 1] * prod;
            prod *= nums[i];
        }
        output[0] = prod;
        return output;
        // TC - o(n)
        // SC - 0(n)
        // int n = nums.size();
        // vector<int> left(n, 0);
        // vector<int> right(n, 0);
        // left[0] = nums[0];
        // right[n - 1] = nums[n - 1];
        // for (int i = 1; i < n; i++)
        // {
        //     left[i] = left[i - 1] * nums[i];
        // }
        // for (int i = n - 2; i >= 0; i--)
        // {
        //     right[i] = right[i + 1] * nums[i];
        // }
        // vector<int> res(n, 0);
        // for (int i = 0; i < n; i++)
        // {
        //     if (i == 0)
        //     {
        //         res[i] = right[i + 1];
        //     }
        //     else if (i == n - 1)
        //     {
        //         res[i] = left[i - 1];
        //     }
        //     else
        //     {
        //         res[i] = left[i - 1] * right[i + 1];
        //     }
        // }
        // return res;
    }
};