#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;

int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int l1 = 2 * (d1 + d2);
    int l2 = d1 + d2 + d3;
    int l3 = 2 * (d1 + d3);
    int l4 = 2 * (d2 + d3);
    cout << min(l1, min(l2, min(l3, l4))) << endl;
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