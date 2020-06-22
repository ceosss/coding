#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (n > 10)
        {
            cout << s[0] << n - 2 << s[n - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}