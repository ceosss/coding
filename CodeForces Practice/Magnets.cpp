#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        string s1;
        cin >> s1;
        s += s1;
    }
    int count = 1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
            count++;
    }
    cout << count << endl;

    return 0;
}