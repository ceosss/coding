class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {
        unordered_map<char, int> m;
        for (auto i : s)
            m[i]++;
        int x = m[s[0]];
        for (auto i : s)
        {
            if (m[i] != x)
                return false;
        }
        return true;
    }
};