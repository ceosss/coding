class Solution
{
public:
    int climbStairs(int n)
    {
        // kind of fibonacci series
        // TC - o(n);
        vector<int> a(n + 1, 0);
        a[0] = 1;
        a[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        return a[n];
    }
};