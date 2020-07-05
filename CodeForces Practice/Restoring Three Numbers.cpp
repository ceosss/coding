#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n = 4;
    int a[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != max)
        {
            cout << max - a[i] << " ";
        }
    }
    return 0;
}