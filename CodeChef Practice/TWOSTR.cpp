#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int f = -1;
        if (s1.length() != s2.length())
            f = 0;
        else if (s1.length() == s2.length())
        {
            for (int i = 0; i < s1.length(); i++)
            {
                if (s1[i] != '?' && s2[i] != '?')
                {
                    if (s1[i] != s2[i])
                    {
                        f = 0;
                        break;
                    }
                }
            }
        }
        else
            f = 1;
        if (f == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}