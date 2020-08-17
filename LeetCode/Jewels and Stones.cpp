class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        int jLen = J.size();
        int sLen = S.size();
        int jewels = 0;
        for (int i = 0; i < sLen; i++)
        {
            for (int j = 0; j < jLen; j++)
            {
                if (S[i] == J[j])
                {
                    jewels++;
                    break;
                }
            }
        }
        return jewels;
    }
};