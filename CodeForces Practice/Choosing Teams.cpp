#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int x, v = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x + k <= 5)
        {
            v++;
        }
    }
    cout << v / 3 << endl;
    return 0;
}