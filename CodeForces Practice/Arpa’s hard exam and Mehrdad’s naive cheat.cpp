#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, a;
    cin >> n;
    if (n == 0)
        a = 1;
    else if ((n - 1) % 4 == 0)
        a = 8;
    else if ((n - 1) % 4 == 1)
        a = 4;
    else if ((n - 1) % 4 == 2)
        a = 2;
    else
        a = 6;
    cout << a << endl;
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