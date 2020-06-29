#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], countyes = 0, countno = 0, countnoeven = 0, countnoodd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != i % 2)
            {
                if (i % 2 == 0)
                {
                    countnoeven++;
                }
                else
                {
                    countnoodd++;
                }
            }
        }
        if (countnoodd == countnoeven)
        {
            cout << countnoodd << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}