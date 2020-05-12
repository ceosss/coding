#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (isdigit(s[i]))
            {
                sum += s[i] - '0';
            }
        }
        cout << sum << endl;
    }
    return 0;
}