#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int v[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    sort(v, v + 4);
    if (v[0] + v[3] == v[1] + v[2])
        cout << "YES" << endl;
    else if (v[0] + v[1] + v[2] == v[3])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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