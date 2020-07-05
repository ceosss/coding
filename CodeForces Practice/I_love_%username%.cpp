#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], count = 0;
    int min, max;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            max = a[i];
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
            count++;
        }
        if (a[i] < min)
        {
            min = a[i];
            count++;
        }
    }

    cout << count << endl;
    return 0;
}