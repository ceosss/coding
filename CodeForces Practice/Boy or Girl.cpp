#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    string s;
    cin >> s;
    int c = 0;
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
        {
            c++;
        }
    }
    if (c % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}