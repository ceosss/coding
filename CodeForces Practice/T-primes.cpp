#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n)
{
    int skip = 0;
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    ll limit = sqrt(n);
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ll num;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        ll sqr = sqrt(num);
        if (sqr * sqr == num && isPrime(sqr) == true)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}