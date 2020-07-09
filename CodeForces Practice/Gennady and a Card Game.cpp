#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n = 5;
    string table_card, hand_cards[n];

    cin >> table_card;
    bool move = false;
    for (int i = 0; i < n; i++)
    {
        cin >> hand_cards[i];
        if (table_card[0] == hand_cards[i][0] || table_card[1] == hand_cards[i][1])
        {
            move = true;
        }
    }
    if (move == true)
    {
        cout << "YES" << endl;
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
