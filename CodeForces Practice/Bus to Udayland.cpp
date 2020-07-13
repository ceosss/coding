#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int pos1_x = -1, pos1_y = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i][0] == 'O' && s[i][1] == 'O')
        {
            pos1_x = i;
            pos1_y = 0;
            break;
        }
        else if (s[i][3] == 'O' && s[i][4] == 'O')
        {
            pos1_x = i;
            pos1_y = 3;
            break;
        }
    }
    if (pos1_x != -1 && pos1_y != -1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (i == pos1_x)
            {
                for (int j = 0; j < s[i].length(); j++)
                {
                    if (j == pos1_y || j == pos1_y + 1)
                    {
                        cout << '+';
                    }
                    else
                    {
                        cout << s[i][j];
                    }
                }
                cout << endl;
            }
            else
            {
                cout << s[i] << endl;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
    }
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