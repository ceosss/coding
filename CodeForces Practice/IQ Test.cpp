#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int c_even = 0, l_even, l_odd;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            c_even++;
            l_even = i;
        }
        else
        {
            c_even--;
            l_odd = i;
        }
    }
    cout << (c_even > 0 ? l_odd + 1 : l_even + 1) << endl;

    return 0;
}