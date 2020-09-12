#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, m;
    string a, b;
    map<string, string> mp;
    cin >> n >> m;
    while (m--)
    {
        cin >> a >> b;
        if (a.size() <= b.size())
            mp[a] = a;
        else
            mp[a] = b;
    }
    while (n--)
    {
        cin >> a;
        cout << mp[a] << " ";
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