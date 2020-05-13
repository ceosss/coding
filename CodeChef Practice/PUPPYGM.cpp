#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 != 0 && b % 2 != 0)
            cout << "Vanka" << endl;
        else
            cout << "Tuzik" << endl;
    }
    return 0;
}