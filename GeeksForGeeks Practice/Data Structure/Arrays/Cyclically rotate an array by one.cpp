void rotate(int a[], int n)
{
    // TC - o(n)
    // SC - o(1)
    int temp = a[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}