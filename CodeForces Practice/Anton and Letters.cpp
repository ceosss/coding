#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    if (s[0] == '{' && s[1] == '}')
        cout << "0" << endl;
    else
    {
        set<char> x;
        for (int i = 1; i < s.length() - 1; i++)
        {
            if (s[i] != ' ' && s[i] != ',')
            {
                x.insert(s[i]);
            }
        }

        cout << x.size() << endl;
    }
    return 0;
}