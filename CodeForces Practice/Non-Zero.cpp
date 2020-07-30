#include <bits/stdc++.h>

#define ull unsigned long long
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
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll s = 0;
        ll cz = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0)
                cz++;
            s += a[i];
        }
        if (cz == 0 && s != 0)
        {
            cout << 0 << endl;
        }
        else if (cz == 0 && s == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            if (cz + s != 0)
            {
                cout << cz << endl;
            }
            else
                cout << cz + 1 << endl;
        }
    }
    return 0;
}

//
//        .--------------.
//        | Try First One|
//        '--------------'
//                |     .--------------.
//                |     |              |
//                V     V              |
//              .--------------.       |
//              |      AC.     |<---.  |
//              '--------------'    |  |
//              (True)|  |(False)   |  |
//           .--------'  |          |  |
//           |           V          |  |
//           |  .--------------.    |  |
//           |  |   Try Again  |----'  |
//           |  '--------------'       |
//           |                         |
//           |  .--------------.       |
//           '->| Try Next One |-------'
//              '--------------'
//