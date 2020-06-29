#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    double x, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }

    cout << fixed << setprecision(12) << sum / n << endl;

    return 0;
}