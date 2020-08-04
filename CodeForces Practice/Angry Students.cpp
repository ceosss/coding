#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int t, n, i, flag, max, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        char arr[n];
        flag = max = count = 0;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        for (i = 0; i < n; i++)
        {
            if (arr[i] == 'A')
                flag = 1, count = 0;
            else if (flag == 1 && arr[i] == 'P')
            {
                count++;
                if (max < count)
                    max = count;
            }
            else
                flag = 0, count = 0;
        }
        cout << max << endl;
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