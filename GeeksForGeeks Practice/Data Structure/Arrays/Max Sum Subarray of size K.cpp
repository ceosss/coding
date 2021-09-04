class Solution
{
public:
    int maximumSumSubarray(int k, vector<int> &a, int n)
    {
        // sliding window
        // TC - o(n)
        int i = 0, j = 0;
        int sum = 0, mx = INT_MIN;
        while (j < n)
        {
            sum += a[j];
            if (j - i + 1 != k)
            {
                j++;
            }
            else
            {
                mx = max(mx, sum);
                sum -= a[i];
                i++;
                j++;
            }
        }
        return mx;
        // TC - o(n^2)
        // int mx = INT_MIN;
        // for(int i=0;i<n-k+1;i++)
        // {
        //     int sum = 0;
        //     for(int j = i; j-i<k; j++)
        //     {
        //         sum += a[j];
        //     }
        //     mx = max(mx,sum);
        // }
        // return mx;
    }
};