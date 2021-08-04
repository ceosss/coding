class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        int cache[26] = {0};
        for (int i = 0; i < sentence.length(); i++)
            cache[sentence[i] - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            if (cache[i] == 0)
                return false;
        }
        return true;
    }
};