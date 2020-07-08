#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int num = n / 2, a = 0, b = 0;
        num--;
        for (int k = 1; k <= n; k++)
        {
            if (k == n)
            {
                a += pow(2, k);
            }
            else if (num > 0)
            {
                a += pow(2, k);
                num--;
            }
            else
            {
                b += pow(2, k);
            }
        }
        cout << abs(a - b) << endl;
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
