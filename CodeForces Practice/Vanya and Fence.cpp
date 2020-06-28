#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int a[n];
    int width = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }
    cout << width << endl;
    return 0;
}