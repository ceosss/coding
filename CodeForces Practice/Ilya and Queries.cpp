#include <iostream>
using namespace std;

int main()
{
    int i, j = 0, r, l, m = 0, n, p = 0;
    string a;
    cin >> a;
    int arr[100005] = {0};
    arr[0] = 0;
    for (i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i - 1])
        {
            arr[i] = 1;
        }
        else
            arr[i] = 0;
    }
    for (i = 1; i < a.size(); i++)
    {
        j += arr[i];
        arr[i] = j;
    }
    cin >> n;
    while (n--)
    {
        cin >> l >> r;
        l--;
        r--;
        p = arr[r] - arr[l];
        cout << p << endl;
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