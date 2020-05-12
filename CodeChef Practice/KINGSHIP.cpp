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
        ll p[n];
        ll cost = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        sort(p, p + n);
        for (ll i = 1; i < n; i++)
        {
            cost += p[i] * p[0];
        }
        cout << cost << endl;
    }
    return 0;
}