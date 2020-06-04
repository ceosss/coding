#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x;
        int min = INT_MAX, max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x > max)
                max = x;
            if (x < min)
                min = x;
        }
        cout << max << " " << min << endl;
    }
    return 0;
}