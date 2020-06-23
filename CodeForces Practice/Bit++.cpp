#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int len = s.length();
        if (s[0] == '+' || s[len - 1] == '+')
        {
            x++;
        }
        else if (s[0] == '-' || s[len - 1] == '-')
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}