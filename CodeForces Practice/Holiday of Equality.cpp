
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += max - a[i];
    }
    cout << count << endl;
    return 0;
}