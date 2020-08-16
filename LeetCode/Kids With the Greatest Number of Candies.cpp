class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {

        int max = candies[0];

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] > max)
            {
                max = candies[i];
            }
        }

        vector<bool> b;

        for (int i = 0; i < candies.size(); i++)
        {
            b.push_back(candies[i] + extraCandies >= max);
        }
        return b;
    }
};