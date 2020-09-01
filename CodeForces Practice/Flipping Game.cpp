#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long int

using namespace std;

int main()
{
    int ans1 = 0, n, ans = 0, i, j, x, y, mx = 0, k;
    cin >> n;
    int a[n + 4];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            ans1 = 0;
            for (k = 0; k < n; k++)
            {
                if (k >= i && k <= j)
                {
                    if (a[k] == 0)
                        ans1++;
                }
                else
                {
                    ans1 += a[k];
                }
            }
            ans = max(ans, ans1);
        }
    }
    cout << ans << endl;
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
