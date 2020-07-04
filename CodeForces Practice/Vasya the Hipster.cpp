#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    int minimum = min(a, b);
    a -= minimum;
    b -= minimum;
    int same_pair = a / 2 + b / 2;
    cout << minimum << " " << same_pair << endl;
    return 0;
}