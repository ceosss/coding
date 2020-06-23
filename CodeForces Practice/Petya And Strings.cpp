#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    for (int i = 0; i < n; i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    if (s1 < s2)
    {
        cout << "-1" << endl;
    }
    else if (s2 < s1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}