#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int years = 0;
    if (a == b)
    {
        cout << "1" << endl;
    }
    else
    {
        while (a <= b)
        {

            a *= 3;
            b *= 2;
            years++;
        }
        cout << years << endl;
    }
    return 0;
}