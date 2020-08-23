#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k;
    set<int> s;
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        s.insert(x);
        mp[x] = i;
    }

    if (s.size() >= k)
    {
        cout << "YES" << endl;
        int cnt = 0;
        for (auto ele : s)
        {
            cout << mp[ele] << " ";
            cnt++;
            if (cnt == k)
            {
                break;
            }
        }
    }
    else
    {
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
