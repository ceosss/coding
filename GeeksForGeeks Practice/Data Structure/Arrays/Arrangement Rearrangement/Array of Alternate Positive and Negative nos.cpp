#include <bits/stdc++.h>

#define ll long long
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = -1;
        for (int j = 0; j < n; j++)
        {
            if (a[j] < 0)
            {
                i++;
                swap(&a[i], &a[j]);
            }
        }
        int pos = i + 1, neg = 0;

        while (pos < n && neg < pos &&
               a[neg] < 0)
        {
            swap(&a[neg], &a[pos]);
            pos++;
            neg += 2;
        }

        for (auto i : a)
        {
            cout << i << " ";
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