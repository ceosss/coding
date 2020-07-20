#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b;
    x = max(a, b);
    y = 6 - x + 1;
    if (y == 1 || y == 5)
        cout << y << "/6";
    else if (y == 3)
        cout << "1/2";
    else if (y == 6)
        cout << "1/1";
    else
        cout << y / 2 << "/3";
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