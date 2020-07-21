#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> a;
    for (int i = 0; i < n; i++)
    {
        a[s[i]]++;
    }
    int min_one = min(a['o'], min(a['n'], a['e']));
    a['o'] -= min_one;
    a['n'] -= min_one;
    a['e'] -= min_one;
    int min_zero = (a['z'], min(a['e'], min(a['r'], a['o'])));
    a['z'] -= min_zero;
    a['e'] -= min_zero;
    a['r'] -= min_zero;
    a['o'] -= min_zero;
    for (int i = 0; i < min_one; i++)
    {
        cout << "1 ";
    }
    for (int i = 0; i < min_zero; i++)
    {
        cout << "0 ";
    }
    cout << endl;

    // OR

    /*
    int n;
    cin >> n;
    string s;
    cin >> s;
    int z = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'z')
            z++;
        else if (s[i] == 'n')
            m++;
    }

    while (m--)
        cout << "1 ";
    while (z--)
        cout << "0 ";
    cout << endl;
    */

    return 0;
}

//
//        .--------------.
//        | Try First One|
//        '--------------'
//                |     .--------------.
//                |     |              |
//                V     V              |
//              .--------------.       |
//              |      AC.     |<---.  |
//              '--------------'    |  |
//              (True)|  |(False)   |  |
//           .--------'  |          |  |
//           |           V          |  |
//           |  .--------------.    |  |
//           |  |   Try Again  |----'  |
//           |  '--------------'       |
//           |                         |
//           |  .--------------.       |
//           '->| Try Next One |-------'
//              '--------------'
//