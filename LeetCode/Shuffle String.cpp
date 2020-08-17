class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        int sLen = s.length();
        string shuffled = s;
        for (int i = 0; i < sLen; i++)
        {
            shuffled[indices[i]] = s[i];
        }
        return shuffled;
    }
};