#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll min = a[1] - a[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] < min)
                min = a[i + 1] - a[i];
        }
        cout << min << endl;
    }
    return 0;
}