#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int steps = 0;
    while (n > 0)
    {
        if (n >= 5)
        {
            int div = n / 5;
            steps += div;
            n = n - 5 * div;
        }
        else if (n >= 4)
        {
            int div = n / 4;
            steps += div;
            n = n - 4 * div;
        }
        else if (n >= 3)
        {
            int div = n / 3;
            steps += div;
            n = n - 3 * div;
        }
        else if (n >= 2)
        {
            int div = n / 2;
            steps += div;
            n = n - 2 * div;
        }
        else if (n >= 1)
        {
            steps++;
            n--;
        }
    }
    cout << steps << endl;
    return 0;
}