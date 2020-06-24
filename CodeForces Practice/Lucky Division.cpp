#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, i, a[10] = {4, 7, 47, 74, 447, 474, 477, 774, 747, 744}, cnt = 0;
    cin >> n;
    for (i = 0; i < 10; i++)
    {
        if (n == a[i] || n % a[i] == 0)
        {
            cout << "YES" << endl;
            break;
        }

        else
            cnt++;
    }
    if (cnt == 10)
        cout << "NO" << endl;
    return 0;
}