#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int i = 0;
    string dub;
    int f = 0;
    while (i < n)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 3;
        }
        else
        {
            dub += s[i];
            i++;
            if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
            {
                dub += " ";
            }
        }
    }
    cout << dub;
    return 0;
}