#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;

int main()
{
    int dima = 0, sereja = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool chance = 0;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (a[low] > a[high])
        {
            if (chance)
            {
                dima += a[low];
            }
            else
            {
                sereja += a[low];
            }
            low++;
        }
        else
        {
            if (chance)
            {
                dima += a[high];
            }
            else
            {
                sereja += a[high];
            }
            high--;
        }
        chance = !chance;
    }
    cout << sereja << " " << dima << endl;
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