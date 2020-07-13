#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool chance = 0;
    if (n < 2)
    {
        cout << "Ehab" << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << "Mahmoud" << endl;
        }
        else
        {
            cout << "Ehab" << endl;
        }
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