class Solution
{
public:
    bool isVowel(char ch)
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        else
            return false;
    }
    bool halvesAreAlike(string s)
    {
        int vCount = 0;
        int n = s.length();
        for (int i = 0; i < n / 2; i++)
        {
            if (isVowel(s[i]))
                vCount++;
            if (isVowel(s[n / 2 + i]))
                vCount--;
        }
        return vCount == 0;
    }
    // bool halvesAreAlike(string s)
    // {
    //     int vCount1 = 0, vCount2 = 0;
    //     int n = s.length();
    //     for (int i = 0; i < n / 2; i++)
    //     {
    //         if (isVowel(s[i]))
    //             vCount1++;
    //         if (isVowel(s[n / 2 + i]))
    //             vCount2++;
    //     }
    //     return vCount1 == vCount2;
    // }
};