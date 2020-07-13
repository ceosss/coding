#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        // 1,2,3,4,5,6,7
        // 7,6,5,4,3,2,1
        // 7,2,5,4,3,6,1
        int even = 0, odd = 0, i = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << b[i] << " ";
            }
            else
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
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