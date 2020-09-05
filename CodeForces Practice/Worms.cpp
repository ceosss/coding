#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long int

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = 0; i < n; i++)
        v.push_back(a[i]);
    sort(v.begin(), v.end());
    while (q--)
    {
        int x;
        cin >> x;
        auto idx = lower_bound(v.begin(), v.end(), x);
        cout << 1 + (idx - v.begin()) << endl;
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
