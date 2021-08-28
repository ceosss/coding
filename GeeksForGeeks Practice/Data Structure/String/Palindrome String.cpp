int isPlaindrome(char s[])
{
    int start = 0;
    int end = strlen(s) - 1;
    while (start < end)
    {
        if (s[start] != s[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}
