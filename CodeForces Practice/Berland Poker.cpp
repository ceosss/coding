#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        int card = n / k;
        if (j == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (card >= j)
        {
            cout << j << endl;
            continue;
        }
        int temp = (j - card) / (k - 1);
        if ((j - card) % (k - 1) != 0)
        {
            temp++;
        }
        cout << card - temp << endl;
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