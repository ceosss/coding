#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                count++;
        }
        cout << count * (count + 1) / 2 << endl;
    }
    return 0;
}