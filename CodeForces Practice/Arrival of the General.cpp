#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], min = INT_MAX, max = INT_MIN, maxi, mini;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            maxi = i;
        }
    }
    int count = 0;
    int i = maxi;
    while (i - 1 >= 0)
    {
        int temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
        count++;
        i--;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= min)
        {
            min = a[i];
            mini = i;
        }
    }

    i = mini;
    while (i + 1 < n)
    {
        int temp = a[i];
        a[i] = a[i + 1];
        ;
        a[i + 1] = temp;
        count++;
        i++;
    }

    cout << count << endl;

    return 0;
}