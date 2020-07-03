#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int dir = 1;
    for (int i = 0; i < n; i++)
    {
        int done = 0;
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                cout << '#';
            }
            else
            {
                if (j == 0 && dir == 0 && done == 0)
                {
                    cout << '#';
                    dir = 1;
                    done = 1;
                }
                else if (j == m - 1 && dir == 1 && done == 0)
                {
                    cout << '#';
                    dir = 0;
                    done = 1;
                }
                else
                {
                    cout << '.';
                }
            }
        }

        cout << endl;
    }
    return 0;
}