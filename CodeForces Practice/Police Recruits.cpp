
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0, crime = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == -1)
        {
            if (count > 0)
            {
                count--;
            }
            else
            {
                crime++;
            }
        }
        else
        {
            count += a[i];
        }
    }
    cout << crime << endl;
    return 0;
}