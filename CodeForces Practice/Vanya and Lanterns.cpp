#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    ll n, l, d = 0;

    cin >> n >> l;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] > d)
        {
            d = arr[i + 1] - arr[i];
        }
    }
    double x = arr[0];
    double y = l - arr[n - 1];
    double p = max(x, y);
    double ans = max(p, (double)d / 2);

    cout << fixed;
    cout << setprecision(9);
    cout << ans;
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
