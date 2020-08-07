#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    ull t;
    cin >> t;
    while (t--)
    {
        ll x, y, z, h, c = 0;
        cin >> x >> y >> z;

        h = max(max(x, y), z);

        if (x == h)
            c++;

        if (y == h)
            c++;

        if (z == h)
            c++;

        if (c >= 2)
        {
            if (x == h && y == h)
            {
                cout << "YES\n";
                cout << h << " " << z << " " << z << endl;
            }

            else if (x == h && z == h)
            {
                cout << "YES" << endl;
                cout << h << " " << y << " " << y << endl;
            }

            else
            {
                cout << "YES\n";
                cout << h << " " << x << " " << x << endl;
            }
        }
        else
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