#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int n, q, val, left, right, mid, temp;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    cin >> q;
    int check[q];
    for (int i = 0; i < q; i++)
        cin >> check[i];

    for (int i = 0; i < q; i++)
    {
        temp = -1;
        val = check[i];
        left = 0;
        right = n - 1;
        mid = (left + right) / 2;
        while (left <= right)
        {

            if (arr[mid] <= val)
            {

                temp = mid;
                left = mid + 1;
                mid = (left + right) / 2;
            }
            else
            {
                right = mid - 1;
                mid = (left + right) / 2;
            }
        }
        cout << temp + 1 << endl;
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
