#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n = 3;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[1] - a[0] + a[2] - a[1] << endl;
    return 0;
}