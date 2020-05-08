#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int ino;
    double dno;
    string schar;
    cin >> ino >> dno;
    cin.ignore();
    getline(cin, schar);
    cout << ino + i << endl;
    printf("%.1f\n", dno + d);
    cout << s;
    cout << schar;
    return 0;
}