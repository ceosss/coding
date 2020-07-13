#include <bits/stdc++.h>

#define ll long long
using namespace std;

void reverse(string &s, int start, int end)
{
    if (start >= end)
        return;

    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    reverse(s, start + 1, end - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        reverse(s, 0, s.length() - 1);
        cout << s << endl;
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