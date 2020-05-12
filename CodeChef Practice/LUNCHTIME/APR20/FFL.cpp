#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int p[n];
        for (int i = 0; i < n; i++)
            cin >> p[i];
        int pos[n];
        for (int i = 0; i < n; i++)
            cin >> pos[i];
        int minf = INT_MAX, mind = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (pos[i] == 1 && p[i] < minf)
                minf = p[i];
            else if (pos[i] == 0 && p[i] < mind)
                mind = p[i];
        }
        int sum = minf + mind;
        //cout<<s<<" "<<sum<<endl;
        if (100 - (s + sum) >= 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}