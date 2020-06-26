#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int f = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            f = 2;
            break;
        }
    }
    if (f == 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}