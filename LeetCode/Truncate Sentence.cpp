class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        string result = "";
        int n = s.length();
        int word = 0;
        for (int i = 0; i < n && word < k; i++)
        {
            if (s[i] == ' ')
                word++;
            result += s[i];
        }
        if (result.last() == ' ')
        {
            result.pop_back();
        }
        return result;
    }
};