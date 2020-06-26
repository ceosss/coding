#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll temp = n, t4 = 0, t7 = 0;
    int f = 0;
    while (temp > 0)
    {
        int t = temp % 10;
        if (t == 4)
            t4++;
        if (t == 7)
            t7++;

        temp /= 10;
    }
    if (t4 + t7 == 7 || t4 + t7 == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}