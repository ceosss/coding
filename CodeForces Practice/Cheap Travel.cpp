#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long int

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
        cout << (a * n);
    else
        cout << (n / m * b) + min(n % m * a, b);
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
