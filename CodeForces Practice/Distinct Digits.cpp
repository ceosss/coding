#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

bool unique(int n)
{
    int a[10] = {0};
    bool u = false;
    while (n)
    {
        a[n % 10]++;
        if (a[n % 10] > 1)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int l, r, f = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (unique(i))
        {
            f = -1;
            cout << i << endl;
            break;
        }
    }
    if (f == 0)
    {
        cout << "-1" << endl;
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