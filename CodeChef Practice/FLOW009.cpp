#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        double q, p;
        cin >> q >> p;
        if (q <= 1000)
        {
            printf("%.6f\n", p * q);
        }
        else
        {
            double price = p * q;
            double dis = 10 * price / 100;
            price -= dis;
            printf("%.6f\n", price);
        }
    }

    return 0;
}