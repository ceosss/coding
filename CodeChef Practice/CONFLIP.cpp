#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll g;
        cin >> g;
        while (g--)
        {
            ll I, N, Q;
            cin >> I >> N >> Q;
            if (N % 2 == 0 || I == Q)
                cout << N / 2 << endl;
            else
                cout << N / 2 + 1 << endl;
        }
    }
    return 0;
}