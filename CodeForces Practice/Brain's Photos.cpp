#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char s;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s;
            if (s != 'B' && s != 'W' && s != 'G')
            {
                flag = 1;
                break;
            }
            cin >> s;
            if (s != 'B' && s != 'W' && s != 'G')
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
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
