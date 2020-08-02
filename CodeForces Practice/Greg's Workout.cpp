#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int n, t, a = 0, b = 0, c = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (i % 3 == 1)
            a += t;
        else if (i % 3 == 2)
            b += t;
        else
            c += t;
    }

    if (a > b and a > c)
        cout << "chest" << endl;
    else if (b > a and b > c)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
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