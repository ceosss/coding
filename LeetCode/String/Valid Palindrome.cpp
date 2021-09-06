class Solution
{
public:
    bool isPalindrome(string s)
    {
        string filtered = "";

        for (auto i : s)
        {
            if (i >= 'a' && i <= 'z')
            {
                filtered += i;
            }
            else if (i >= 'A' && i <= 'Z')
            {
                filtered += tolower(i);
            }
            else if (i >= '0' && i <= '9')
            {
                filtered += i;
            }
        }

        int start = 0;
        int end = filtered.length() - 1;
        while (start < end)
        {
            if (filtered[start] != filtered[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};