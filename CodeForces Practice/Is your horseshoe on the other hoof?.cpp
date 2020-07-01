#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    set<int> a;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    cout << 4 - a.size();
    return 0;
}