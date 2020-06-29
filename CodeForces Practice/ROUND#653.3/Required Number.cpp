#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        ll z = n / x;
        while (x * z + y > n && z > 0)
        {
            z--;
        }
        cout << x * z + y << endl;
    }
    return 0;
}