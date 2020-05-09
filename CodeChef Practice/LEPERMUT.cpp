#include <iostream>
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
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int inver = 0, local = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[i] > a[j])
                    inver++;
            }
            if (i != n && a[i] > a[i + 1])
                local++;
        }
        if (inver == local)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}