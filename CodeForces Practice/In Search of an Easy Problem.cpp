#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
        {
            f = -1;
        }
    }
    if (f == -1)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }

    return 0;
}