#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int a, b, c, d;
    ll k = 0, sum1 = 0, sum2 = 0, sum;
    cin >> a >> b >> c >> d;
    int p = min(a, c);
    int q = min(p, d);
    sum1 = 256 * q;
    a = a - q;
    if (a > 0)
    {
        k = min(a, b);
    }
    sum2 = k * 32;
    sum = sum1 + sum2;
    cout << sum << endl;
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