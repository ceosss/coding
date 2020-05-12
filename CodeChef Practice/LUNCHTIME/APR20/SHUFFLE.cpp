#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0)
            {
                if (a[i] < a[i - 1])
                    flag = -1;
            }
        }
        if (flag == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + k; j < n; j = j + k)
                {
                    if (a[i] > a[j])
                    {
                        ll temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            int f = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] > a[i + 1])
                {
                    f = -1;
                    break;
                }
            }
            if (f == -1)
                cout << "no" << endl;
            else
                cout << "yes" << endl;
        }
    }
    return 0;
}