#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, max = INT_MIN, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        sum -= a;
        sum += b;
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max << endl;
    return 0;
}