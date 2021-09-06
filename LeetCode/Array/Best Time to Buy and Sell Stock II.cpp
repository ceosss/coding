class Solution
{
public:
    int maxProfit(vector<int> &a)
    {
        // TC - o(n)
        // SC - o(1)
        int profit = 0;
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] > a[i - 1])
                profit += a[i] - a[i - 1];
        }
        return profit;
    }
};