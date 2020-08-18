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
        int n = s.length(), i;
        vector<int> v;
        int cnt = 1;
        int b = 0;
        for (i = 0; i <= n - 2; i++)
        {
            if (s[i] == s[i + 1] && s[i] == '1')
            {
                cnt++;
            }
            else if (s[i] == '1')
            {
                v.push_back(cnt);
                cnt = 1;
            }
        }
        if (i == n - 1 && s[i] == '1')
            v.push_back(cnt);
        sort(v.begin(), v.end());
        for (i = v.size() - 1; i >= 0; i -= 2)
        {
            b += v[i];
        }
        cout << b << "\n";
        v.clear();
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