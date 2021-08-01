class Solution
{
public:
    int maximumWealth(vector<vector<int> > &accounts)
    {
        int max = INT_MIN;
        int currentSum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            currentSum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                currentSum += accounts[i][j];
            }
            if (currentSum > max)
                max = currentSum;
        }
        return max;
    }
};