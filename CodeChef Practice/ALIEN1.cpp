#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

bool check(ll mid, ll m, ll k, ll x)
{
    ll res = 2 * mid + m;
    res = (res % k ? res / k + 1 : res / k);
    return x >= res;
}
int main()
{
    int t, cnt;
    ll m, k, x, f, l, mid, fix = 1e9;
    cin >> t;
    while (t--)
    {
        cin >> m >> k >> x;
        f = 0;
        l = 1e18;
        cnt = 60;
        mid = (f + l) / 2;
        while (f <= l)
        {
            if (check(mid, m, k, x))
                f = mid + 1;
            else
                l = mid - 1;
            mid = (f + l) / 2;
        }
        cout << (mid > fix ? "YES\n" : "NO\n");
        cout << mid << '\n';
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