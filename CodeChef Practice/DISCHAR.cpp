#include <bits/stdc++.h>
using namespace std;

int main()
{
    char N[100001];
    int ar[27], t, i;
    int count = 0, max = INT_MIN, j;
    cin >> t;
    while (t--)
    {
        count = 0;
        max = INT_MIN;
        for (i = 0; i < 27; i++)
            ar[i] = 1;

        cin >> N;
        for (i = 0; N[i] != '\0'; i++)
        {
            if ((ar[N[i] - 'a']) == 1)
            {
                count++;
                if (count > max)
                    max = count;
                ar[N[i] - 'a']++;
            }
            else if (ar[N[i] - 'a'] > 1)
            {
                ar[N[i] - 'a'] = 2;
            }
        }
        cout << max << endl;
    }

    return 0;
}