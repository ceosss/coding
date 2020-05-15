#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a * b == c * d || a * d == b * c || a * c == b * d)
        cout << "Possible" << endl;
    else
        cout << "Impossible" << endl;
    return 0;
}