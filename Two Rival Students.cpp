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
        ll n, x, a, b;
        cin >> n >> x >> a >> b;

        ll ans = min(n - 1, abs(a - b) + x);
        cout << ans << endl;
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