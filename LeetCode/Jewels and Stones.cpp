class Solution
{
public:
    // O(N)
    int numJewelsInStones(string jewels, string stones)
    {
        int count = 0;
        bool cache[58] = {false};

        for (int i = 0; i < jewels.length(); i++)
            cache[jewels[i] - 'A'] = true;

        for (int i = 0; i < stones.length(); i++)
        {
            if (cache[stones[i] - 'A'])
                count++;
        }

        return count;
    }

    // O(N^2)
    // int numJewelsInStones(string J, string S)
    // {
    //     int jLen = J.size();
    //     int sLen = S.size();
    //     int jewels = 0;
    //     for (int i = 0; i < sLen; i++)
    //     {
    //         for (int j = 0; j < jLen; j++)
    //         {
    //             if (S[i] == J[j])
    //             {
    //                 jewels++;
    //                 break;
    //             }
    //         }
    //     }
    //     return jewels;
    // }
};