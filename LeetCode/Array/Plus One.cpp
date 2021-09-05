class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        // 1 8 8 9
        // 1 9 8
        int i = digits.size() - 1;
        while (i >= 0)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                break;
            }
            digits[i] = 0;
            i--;
        }
        if (i == -1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};