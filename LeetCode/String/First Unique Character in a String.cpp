class Solution
{
public:
    int firstUniqChar(string s)
    {
        // TC - o(n)/one pass
        // SC - o(n)
        vector<int> cache(26, -1);
        for (int i = 0; i < s.length(); i++)
        {
            int x = s[i] - 'a';
            if (cache[x] == -1)
            {
                cache[x] = i;
            }
            else
            {
                cache[x] = -2;
            }
        }
        int res = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            if (cache[i] >= 0)
            {
                res = min(res, cache[i]);
            }
        }

        return res == INT_MAX ? -1 : res;

        // TC - o(n)
        // SC - o(n)
        //     unordered_map<char, int> m;

        //     for (auto i : s)
        //         m[i]++;

        //     for (int i = 0; i < s.length(); i++)
        //     {
        //         if (m[s[i]] == 1)
        //         {
        //             return i;
        //         }
        //     }
        //     return -1;
    }
};