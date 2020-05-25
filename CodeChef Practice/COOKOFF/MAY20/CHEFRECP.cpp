#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int a[n];
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
                max = a[i];
        }
        int m = max + 1;
        int b[m] = {0};

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            int e = -1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] != a[j])
                    e = 1;
                if (a[i] == a[j] && e == 1)
                {
                    flag = -1;
                    break;
                }
            }
            if (flag == -1)
            {
                break;
            }
        }
        if (flag == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int z = 0;
            for (int i = 0; i < n; i++)
            {
                b[a[i]]++;
            }
            sort(b, b + m);
            //for (auto i : b) {
            //    cout<<i<<" ";
            //}
            //cout<<endl;
            for (int i = 0; i < m - 1; i++)
            {
                if (b[i] > 0 && b[i] == b[i + 1])
                {
                    z = -1;
                    break;
                }
            }
            if (z == -1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}