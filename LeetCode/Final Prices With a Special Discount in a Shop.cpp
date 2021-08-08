class Solution
{
public:
    vector<int> finalPrices(vector<int> &prices)
    {
        vector<int> result;
        for (int i = 0; i < prices.size(); i++)
        {
            int discount = 0;
            for (int j = i + 1; j < prices.size(); j++)
            {
                if (prices[j] <= prices[i])
                {
                    discount = prices[j];
                    break;
                }
            }
            result.push_back(prices[i] - discount);
        }
        return result;
    }
};