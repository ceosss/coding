#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 1;
    for (int i = 0; i <= 4000; i++)
    {
        for (int j = 0; j <= 4000; j++)
        {
            int remain = n - a * i - b * j;
            if (remain >= 0 && remain % c == 0)
            {
                int part3 = remain / c;
                ans = max(ans, i + j + part3);
            }
        }
    }

    cout << ans << endl;
}