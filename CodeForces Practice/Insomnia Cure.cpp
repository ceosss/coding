#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int c = d;
    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << c << endl;
    }
    else
    {
        for (int i = 1; i <= d; i++)
        {
            if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0))
            {
                c--;
            }
        }
        cout << c << endl;
    }

    return 0;
}