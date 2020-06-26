#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lc = 0, uc = 0,n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
            uc++;
        else
            lc++;
    }
    if (uc > lc)
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    return 0;
}