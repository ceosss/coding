#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &e : a)
        cin >> e;
    sort(a.begin(), a.end());
    bool ok = true;
    for (int i = 1; i < n; i++)
    {
        int x = abs(a[i] - a[i - 1]);
        if (x <= 1)
            ok = false;
    }
    if (ok)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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