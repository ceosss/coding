#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count = 0;
        int f = 0;
        if (n == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            while (n != 1)
            {
                if (n % 6 == 0)
                {
                    n /= 6;
                }
                else
                {
                    n *= 2;
                    if (n % 6 != 0)
                    {
                        f = -1;
                        break;
                    }
                }
                count++;
            }
            if (f == -1)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << count << endl;
            }
        }
    }
    return 0;
}