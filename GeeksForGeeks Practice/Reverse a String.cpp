#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string p = "";
        for (int i = s.length() - 1; i >= 0; i--)
            p += s[i];
        cout << p << endl;
    }
    return 0;
}