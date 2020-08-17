#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, mina = INT_MAX, minb = INT_MAX, minn, maxx;
        cin >> n;
        ll a[n], b[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < mina)
                mina = a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < minb)
                minb = b[i];
        }
        ll moves = 0;
        for (i = 0; i < n; i++)
        {
            moves += max((a[i] - mina), (b[i] - minb));
        }
        cout << moves << endl;
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