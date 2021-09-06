class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0;
        bool neg = false;
        long res = 0;

        while (s[i] == ' ' && i < s.length())
            i++;

        if (s[i] == '-')
        {
            neg = true;
            i++;
        }
        else if (s[i] == '+')
        {
            neg = false;
            i++;
        }
        else if (!(s[i] >= '0' && s[i] <= '9'))
        {
            return 0;
        }

        while (i < s.length())
        {
            int x = s[i] - '0';
            if (res < INT_MIN || res > INT_MAX)
                break;
            if (x >= 0 && x <= 9)
            {
                res = res * 10 + x;
            }
            else
            {
                break;
            }
            i++;
        }

        if (neg)
        {
            res *= -1;
        }

        if (res < INT_MIN)
        {
            res = INT_MIN;
        }
        else if (res > INT_MAX)
        {
            res = INT_MAX;
        }

        return res;
    }
};