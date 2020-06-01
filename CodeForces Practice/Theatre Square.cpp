
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll a, n, m, l, w;
    cin >> n >> m >> a;

    l = n / a;
    w = m / a;

    if (n % a != 0)
        l++;
    if (m % a != 0)
        w++;

    cout << l * w << endl;
    return 0;
}