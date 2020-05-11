#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string m;
    cin >> m;
    // 	cout<<m<<endl;
    string a = "";
    for (int i = 'a'; i <= 'z'; i++)
    {
        a += i;
    }
    // 	cout<<a<<endl;
    for (int j = 0; j < t; j++)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '_')
                cout << " ";
            else if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?')
                cout << s[i];
            else
            {
                char c = tolower(s[i]);
                size_t found = a.find(tolower(c));
                if (found != string::npos)
                {
                    if (isupper(s[i]))
                        cout << (char)toupper(m[found]);
                    else
                        cout << m[found];
                }
            }
        }
        cout << endl;
    }
    return 0;
}