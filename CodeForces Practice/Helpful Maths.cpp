#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<char> x;
    for (int i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            x.push_back(s[i]);
        }
    }
    sort(x.begin(), x.end());
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i];
        if (i < x.size() - 1)
            cout << "+";
    }
    return 0;
}