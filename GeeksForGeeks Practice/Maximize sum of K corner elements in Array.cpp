int maxSumOfKCornerElements(int nums[], int k, int n)
{
    int count = 0;
    int sum = 0;
    int start = 0;
    int end = n - 1;
    while (start < end && k--)
    {
        if (nums[start] >= nums[end])
        {
            sum += nums[start];
            start++;
        }
        else
        {
            sum += nums[end];
            end--;
        }
    }
    return sum;
}