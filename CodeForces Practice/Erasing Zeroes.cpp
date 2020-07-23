#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int i = 0;
        while (i < n && s[i] != '1')
            s[i++] = 'x';

        i = n - 1;
        while (i >= 0 && s[i] != '1')
            s[i--] = 'x';
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                count++;
        }
        cout << count << endl;
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