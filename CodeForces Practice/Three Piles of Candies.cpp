#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    ll a, b, c;
    cin >> a >> b >> c;
    cout << (a + b + c) / 2 << endl;
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