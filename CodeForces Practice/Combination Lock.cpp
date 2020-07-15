#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int moves = 0;
    for (int i = 0; i < n; i++)
    {
        int z = abs((s1[i] - '0') - (s2[i] - '0'));
        if (z > 5)
        {
            moves += 10 - z;
        }
        else
        {
            moves += z;
        }
    }
    cout << moves << endl;
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