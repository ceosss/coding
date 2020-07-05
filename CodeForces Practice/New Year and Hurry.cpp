#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0, i = 1, total_time = 4 * 60 - k;
    while (total_time - i * 5 >= 0 && i <= n)
    {
        total_time -= i * 5;
        i++;
        count++;
    }
    cout << count << endl;
    return 0;
}