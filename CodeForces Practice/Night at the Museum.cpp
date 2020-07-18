#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length(), rotations = 0;
    char current = 'a';
    for (int i = 0; i < n; i++)
    {

        rotations += min(abs(s[i] - current), abs(26 - abs(s[i] - current)));
        current = s[i];
    }
    cout << rotations << endl;
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