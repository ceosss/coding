class Solution
{
public:
    void sortIt(long long arr[], long long n)
    {
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                arr[i] = -arr[i];
            }
        }
        sort(arr, arr + n);
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                arr[i] = -arr[i];
            }
        }
    }
};