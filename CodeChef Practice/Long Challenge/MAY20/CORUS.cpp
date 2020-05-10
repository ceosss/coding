#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        ll c[q];
        for (int i = 0; i < q; i++)
        {
            cin >> c[i];
        }
        ll a[26] = {0};
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        // int count=0;

        for (int i = 0; i < q; i++)
        {
            ll k = c[i], count = 0;
            ;
            for (int j = 0; j < 26; j++)
            {
                if (a[j] - k > 0)
                {
                    count += a[j] - k;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}