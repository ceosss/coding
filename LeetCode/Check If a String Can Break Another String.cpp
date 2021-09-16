class Solution
{
public:
    bool checkIfCanBreak(string s1, string s2)
    {
        int n = s1.length();
        int l1 = 0;
        int l2 = 0;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for (int i = 0; i < n; i++)
        {
            if (s1[i] >= s2[i])
            {
                l1++;
            }
            if (s2[i] >= s1[i])
            {
                l2++;
            }
        }
        if (l1 == n || l2 == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};