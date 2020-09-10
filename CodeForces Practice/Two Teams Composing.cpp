#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> m;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            m[d]++;
            s.insert(d);
        }
        int x = 0;
        for (auto to : m)
        {
            x = max(to.second, x);
        }

        int rm = n - x;
        if (x > s.size())
        {
            cout << s.size() << endl;
        }
        else if (x == s.size())
        {
            cout << s.size() - 1 << endl;
        }
        else
        {
            cout << x << endl;
        }
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