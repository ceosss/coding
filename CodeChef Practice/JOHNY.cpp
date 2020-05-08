#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
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
        ll k;
        cin >> k;
        ll uncle = a[k - 1];
        sort(a, a + n);
        ll i;
        for (i = 0; i < n; i++)
        {
            if (a[i] == uncle)
                break;
        }
        cout << i + 1 << endl;
    }
    return 0;
}