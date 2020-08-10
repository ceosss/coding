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
        int n;
        cin >> n;
        int *a = new int[n]();
        int b[n], c = 0, i, key;
        for (i = 0; i < 2 * n; i++)
        {
            cin >> key;
            if (a[key - 1] == 0)
            {
                a[key - 1] = 1;
                b[c++] = key;
            }
        }
        for (i = 0; i < n; i++)
            cout << b[i] << ' ';
        cout << endl;
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