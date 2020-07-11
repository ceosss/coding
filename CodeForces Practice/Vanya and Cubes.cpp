#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cubes = 0;
    int i = 1;
    while (1)
    {
        cubes += i * (i + 1) / 2;
        if (cubes > n)
        {
            cout << i - 1;
            return 0;
        }
        if (cubes == n)
        {
            cout << i;
            return 0;
        }
        i++;
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
