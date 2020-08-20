#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int a, b, n, max = 0, sum = 0, s, x;
    cin >> a >> b >> n;
    while (n > 0)
    {
        s = __gcd(a, n);
        n -= s;
        sum++;
        if (n <= 0)
            break;
        x = __gcd(b, n);
        n -= x;
        max++;
    }
    if (max == sum)
        cout << 1 << endl;
    else if (max > sum)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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