#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int cost = 0;
    int i = 1;
    while (1)
    {
        cost = i * k;
        if (cost % 10 == r || cost % 10 == 0)
        {
            break;
        }
        i++;
    }
    cout << i << endl;
    return 0;
}