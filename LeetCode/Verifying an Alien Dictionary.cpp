class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        map<char, int> m;
        int x = 1;
        for (auto i : order)
        {
            m[i] = x++;
        }
        for (int i = 1; i < words.size(); i++)
        {
            string s1 = words[i - 1];
            string s2 = words[i];
            int l = min(s1.length(), s2.length());
            int j = 0;
            while (j < l && s1[j] == s2[j])
            {
                j++;
            }
            if (j > l)
            {
                return false;
            }
            if (m[s1[j]] > m[s2[j]])
            {
                return false;
            }
        }
        return true;
    }
};