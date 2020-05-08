#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int completed[m];
        int a[n + 1] = {0};
        for (int i = 1; i <= m; i++)
        {
            cin >> completed[i];
            a[completed[i]]++;
        }
        // for (int i = 1; i <= n; i++) {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        int f = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                if (f % 2 == 0)
                    cout << i << " ";
                f++;
            }
        }
        cout << endl;
        f = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                if (f % 2 != 0)
                    cout << i << " ";
                f++;
            }
        }
        cout << endl;
    }
    return 0;
}
