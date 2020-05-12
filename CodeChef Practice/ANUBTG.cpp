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
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        // for (auto i : a) {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        if (n < 2)
            cout << a[0] + a[1] << endl;
        else
        {
            int i = 0;
            while (i < n)
            {
                sum += a[i];
                if (i + 1 < n)
                    sum += a[i + 1];
                i += 4;
            }
            cout << sum << endl;
        }
    }
    return 0;
}