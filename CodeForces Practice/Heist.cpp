#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(a[i], mx);
        mn = min(a[i], mn);
    }
    cout << mx - mn - n + 1 << endl;
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