#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x, y, a, b, m;
        cin >> x >> y >> a >> b;
        x = abs(x);
        y = abs(y);
        ll diff = abs(x - y);
        n = (x + y) * a;
        m = (diff)*a + min(x, y) * b;
        cout << min(m, n) << endl;
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
