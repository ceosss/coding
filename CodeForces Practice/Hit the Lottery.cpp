#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll bills = 0;
    if (n >= 100)
    {
        bills += n / 100;
        n %= 100;
    }
    if (n >= 20)
    {
        bills += n / 20;
        n %= 20;
    }
    if (n >= 10)
    {
        bills += n / 10;
        n %= 10;
    }
    if (n >= 5)
    {
        bills += n / 5;
        n %= 5;
    }
    if (n >= 1)
    {
        bills += n;
    }
    cout << bills << endl;
    return 0;
}