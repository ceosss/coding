#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        ll sum = 0, al = 0, bo = 0;
        for (int i = 0; i < n; i++)
        {
            al += a[i];
            bo += b[i];
            // cout<<a[i]<<" "<<b[i]<<" "<<al<<" "<<bo<<endl;
            if (a[i] == b[i] && al == bo)
            {
                // cout<<a[i]<<" "<<b[i]<<endl;
                sum += a[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}