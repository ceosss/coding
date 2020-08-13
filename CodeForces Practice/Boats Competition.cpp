#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    ll n, a, b, c, d, i, j, k, l, m, cnt, mx, t, ar[10000];
    cin >> t;

    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar, ar + n);
        mx = 0;
        for (l = 2 * n; l >= 1; l--)
        {
            i = 0;
            j = n - 1;
            cnt = 0;
            while (i < j)
            {
                if (ar[i] + ar[j] > l)
                    j--;
                else if (ar[i] + ar[j] < l)
                    i++;
                else if (ar[i] + ar[j] == l)
                {
                    cnt++;
                    i++;
                    j--;
                }
            }
            if (mx < cnt)
                mx = cnt;
        }
        cout << mx << endl;
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