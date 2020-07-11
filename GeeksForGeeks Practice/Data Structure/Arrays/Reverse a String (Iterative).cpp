#include <bits/stdc++.h>

#define ll long long
using namespace std;

void reverseString(string s, int low, int high)
{
    if (low >= high)
        return;
    char t = s[low];
    s[low] = s[high];
    s[high] = t;
    reverseString(s, low + 1, high - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        reverseString(s, 0, n - 1);
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
