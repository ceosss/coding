#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    int wins = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > y)
        {
            wins++;
        }
        else if (x < y)
        {
            wins--;
        }
    }
    if (wins > 0)
    {
        cout << "Mishka" << endl;
    }
    else if (wins < 0)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}