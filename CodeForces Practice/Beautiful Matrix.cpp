#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a[5][5], fi, fj;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                fi = i;
                fj = j;
            }
        }
    }
    int sum = abs(fi - 2) + abs(fj - 2);
    cout << sum << endl;

    return 0;
}