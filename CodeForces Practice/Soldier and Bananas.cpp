#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int cost = 0;
    for (int i = 1; i <= w; i++)
    {
        cost += i * k;
    }
    if (cost > n)
    {
        cout << cost - n << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}