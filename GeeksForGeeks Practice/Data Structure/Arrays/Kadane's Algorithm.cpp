class Solution
{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long max(long long a, long long b)
    {
        return a > b ? a : b;
    }
    long long maxSubarraySum(int arr[], int n)
    {
        // TC - o(n)
        // SC - o(1)
        long long cur = arr[0];
        long long mx = arr[0];
        for (int i = 1; i < n; i++)
        {
            cur = max(cur + arr[i], arr[i]);
            mx = max(mx, cur);
        }
        return mx;
    }
};