#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, sum = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        cout << min(sum, m) << endl;
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