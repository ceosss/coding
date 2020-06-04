#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0, x = n;
        while (x > 0)
        {
            int temp = x % 10;
            sum += temp * temp * temp;
            x /= 10;
        }
        sum == n ? cout << "Yes" << endl : cout << "No" << endl;
    }

    return 0;
}