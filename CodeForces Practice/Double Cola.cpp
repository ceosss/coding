#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long int

using namespace std;

int main()
{
    vector<string> f{"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n, gr = 1, cur = 0, i;
    cin >> n;
    for (i = 5; cur < n; i *= 2)
    {
        cur += i;
    }
    int diff = (i / 5) / 2;
    cout << f[ceil((double)(n - (cur - diff * 5)) / diff) - 1] << endl;
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
