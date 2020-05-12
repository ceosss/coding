#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int K;
        cin >> K;
        int a = 103993, b = 33102;
        for (int i = 0; i <= K; i++)
        {
            cout << a / b;
            if (i == 0 && K > 0)
            {
                cout << ".";
            }
            a = a % b * 10;
        }
        cout << endl;
    }
    return 0;
}