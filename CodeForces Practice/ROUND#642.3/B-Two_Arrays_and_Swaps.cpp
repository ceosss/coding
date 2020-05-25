#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        int i = 0, j = 0, sum = 0;
        while (i < n && j < k)
        {
            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
                j++;
            }
            i++;
        }
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << endl;
    }
    return 0;
}