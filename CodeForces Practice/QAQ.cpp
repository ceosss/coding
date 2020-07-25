#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length(), count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'Q')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'A')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'Q')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }
    cout << count << endl;
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