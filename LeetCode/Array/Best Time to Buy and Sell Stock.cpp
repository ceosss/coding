class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // TC - o(n)
        int minimum = INT_MAX;
        int profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            minimum = min(minimum, prices[i]);
            profit = max(profit, prices[i] - minimum);
        }
        return profit;
        // TC - o(n^2)
        // int profit = 0;
        // int n = prices.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++){
        //         profit = max(profit,prices[j]-prices[i]);
        //     }
        // }
        // return profit;
    }
};