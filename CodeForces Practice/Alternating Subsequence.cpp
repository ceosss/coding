#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int t, i, j;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 1;
        ll element = a[0];
        ll ans = 0;
        while (i < n)
        {
            if (a[i] < 0)
            {
                if (element > 0)
                {
                    ans += element;
                    element = a[i];
                }
                else
                {
                    element = max(element, a[i]);
                }
            }
            else
            {
                if (element < 0)
                {
                    ans += element;
                    element = a[i];
                }
                else
                {
                    element = max(element, a[i]);
                }
            }
            i++;
        }
        ans += element;
        cout << ans << endl;
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