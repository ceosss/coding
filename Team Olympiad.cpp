#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n, b, mas[4][5001], ma[4], ans;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> b;
        mas[b][ma[b]++] = i;
    }
    ans = min(ma[1], min(ma[2], ma[3]));
    cout << ans << endl;
    for (int i = 0; i < ans; i++)
    {
        cout << mas[1][i] << " " << mas[2][i] << " " << mas[3][i] << endl;
    }
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
