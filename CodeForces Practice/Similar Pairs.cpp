#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int i, j, k, l, m, n, p, q, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1], b[n + 1], c[n + 1];
        k = 0, l = 0, p = 0, q = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                l++;
            }
        }
        if (l % 2 == 0)
            cout << "YES" << endl;
        else
        {
            for (i = 0; i < n; i++)
            {
                if (a[i + 1] - a[i] == 1)
                {
                    q = 1;
                    break;
                }
            }
            if (q == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
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