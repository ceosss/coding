#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n - 4 << " 4" << endl;
    }
    else
    {
        cout << n - 9 << " 9" << endl;
    }
    return 0;
}