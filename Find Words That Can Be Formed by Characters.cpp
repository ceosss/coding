class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        int res = 0;
        unordered_map<char, int> mChars;
        for (auto i : chars)
        {
            mChars[i]++;
        }
        for (auto i : words)
        {
            unordered_map<char, int> mCharsCopy = mChars;
            for (auto j : i)
            {
                mCharsCopy[j]--;
            }
            bool flag = false;
            for (auto &i : mCharsCopy)
            {
                if (i.second < 0)
                {
                    flag = true;
                }
            }
            if (!flag)
            {
                res += i.length();
            }
        }
        return res;
    }
};