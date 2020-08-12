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
        int n;
        cin >> n;

        int a[n], d[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (d[i] > a[i + 1] + a[i - 1] and i != 0 and i != n - 1)
            {
                ans = max(ans, d[i]);
            }
            else if (i == 0)
            {
                if (d[i] > a[i + 1] + a[n - 1])
                    ans = max(ans, d[i]);
            }
            else if (i == n - 1)
            {
                if (d[i] > a[i - 1] + a[0])
                    ans = max(ans, d[i]);
            }
        }
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