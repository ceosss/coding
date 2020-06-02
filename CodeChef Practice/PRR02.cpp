#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin >> ws;
    while (t--)
    {
        string s;
        getline(cin, s);
        string p = "";
        int n = s.length();
        int l = 0;
        for (int i = 0; i <= n; i++)
        {
            if (s[i] == ' ' || s[i] == '\0')
            {
                for (int j = i - 1; j >= l; j--)
                {
                    p += s[j];
                }
                p += " ";
                l = i + 1;
            }
        }
        cout << p << endl;
    }
    return 0;
}