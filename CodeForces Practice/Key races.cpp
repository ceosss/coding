#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int s, v1, v2, t1, t2, ans1, ans2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    ans1 = (s * v1) + (t1 * 2);
    ans2 = (s * v2) + (t2 * 2);

    if (ans1 < ans2)
        cout << "First" << endl;
    else if (ans1 > ans2)
        cout << "Second" << endl;
    else
        cout << "Friendship" << endl;
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