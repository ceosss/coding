#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long int

using namespace std;

int main()
{
    int t, i, n, p;
    cin >> t;
    while (t--)
    {
        p = 0;
        cin >> n;
        char bracket[n];
        cin >> bracket;
        for (i = n - 1; i >= 0; i--)
        {
            if (bracket[i] == ')')
            {
                p--;
            }
            else if (bracket[i] == '(' && p < 0)
            {
                p++;
            }
        }
        cout << abs(p) << endl;
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
