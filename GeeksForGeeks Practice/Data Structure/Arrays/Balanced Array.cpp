class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        int start = 0;
        int end = n - 1;
        int fSum = 0;
        int sSum = 0;
        while (start < end)
        {
            fSum += a[start++];
            sSum += a[end--];
        }
        return abs(fSum - sSum);
    }
};
