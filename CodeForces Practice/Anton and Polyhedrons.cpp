#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int face = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
            face += 4;
        else if (s == "Cube")
            face += 6;
        else if (s == "Octahedron")
            face += 8;
        else if (s == "Dodecahedron")
            face += 12;
        else if (s == "Icosahedron")
            face += 20;
    }
    cout << face << endl;
    return 0;
}