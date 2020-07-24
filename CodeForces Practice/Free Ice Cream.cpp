#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    ll n, x, distressed = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        char ind;
        ll d;
        cin >> ind >> d;
        if (ind == '+')
        {
            x += d;
        }
        else
        {
            if (x - d >= 0)
            {
                x -= d;
            }
            else
            {
                distressed++;
            }
        }
    }
    cout << x << " " << distressed << endl;
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