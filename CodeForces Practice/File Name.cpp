#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'x' && a[i + 1] == 'x' && a[i + 2] == 'x' && i + 2 < n)
        {
            count++;
            a[i] = '0';
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