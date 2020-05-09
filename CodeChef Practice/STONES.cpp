#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = s1.length();
        int n2 = s2.length();
        int c = 0;
        for (int i = 0; i < n2; ++i)
        {
            for (int j = 0; j < n1; ++j)
            {
                if (s1[j] == s2[i])
                {
                    c++;
                    break;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
