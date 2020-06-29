#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        string a = "";
        for (int i = 0; i < b.length(); i++)
        {
            if (i < 2)
            {
                a += b[i];
            }
            else if (i % 2 != 0)
            {
                a += b[i];
            }
        }
        cout << a << endl;
    }
    return 0;
}