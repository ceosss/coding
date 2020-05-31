#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << "Not prime" << endl;
        else if (n == 2)
            cout << "Prime" << endl;
        else if (prime(n) == 0)
            cout << "Not prime" << endl;
        else
            cout << "Prime" << endl;
    }
    return 0;
}
