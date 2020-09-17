#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string o1, o2;
        bool push2 = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                o1.push_back('0');
                o2.push_back('0');
            }
            else if (s[i] == '1')
            {
                if (!push2)
                {
                    push2 = true;
                    o1.push_back('1');
                    o2.push_back('0');
                }
                else
                {

                    o2.push_back('1');
                    o1.push_back('0');
                }
            }
            else
            {
                if (!push2)
                {
                    //	push2=true;
                    o1.push_back('1');
                    o2.push_back('1');
                }
                else
                {

                    o2.push_back('2');
                    o1.push_back('0');
                }
            }
        }
        cout << o1 << endl;
        cout << o2 << endl;
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