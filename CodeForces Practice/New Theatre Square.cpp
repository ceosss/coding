#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y, ans = 0, xnt = 0, ynt = 0;
        cin >> n >> m >> x >> y;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j <= m - 1; j)
            {
                if (s[j] == '.' && s[j + 1] == '.')
                {
                    if (y > 2 * x)
                    {
                        xnt++;
                        j++;
                    }
                    else
                    {
                        ynt++;
                        j += 2;
                    }
                }
                else if (s[j] == '.')
                {
                    xnt++;
                    j++;
                }
                else
                    j++;
            }
        }

        ans = xnt * x + ynt * y;
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