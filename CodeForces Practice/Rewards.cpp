#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;

    cin >> n;
    int cups = 0, medals = 0;
    cups = ceil((a1 + a2 + a3) / 5.0);
    medals = ceil((b1 + b2 + b3) / 10.0);
    if (cups + medals <= n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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