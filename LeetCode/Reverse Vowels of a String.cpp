class Solution
{
public:
    bool isVowel(char c)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string reverseVowels(string s)
    {
        int n = s.length();
        int start = 0;
        int end = n - 1;
        while (start <= end)
        {
            while (start <= end && !isVowel(s[start]))
            {
                start++;
            }
            while (end >= start && !isVowel(s[end]))
            {
                end--;
            }
            if (start <= end)
            {
                char c = s[start];
                s[start] = s[end];
                s[end] = c;
            }
            start++;
            end--;
        }
        return s;
    }
};