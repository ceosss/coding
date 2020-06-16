#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int x;
    cin >> x;
    x--;
    a.erase(a.begin() + x);
    int y, z;
    cin >> y >> z;
    y--;
    z--;
    a.erase(a.begin() + y, a.begin() + z);
    cout << a.size() << endl;
    for (auto i : a)
        cout << i << " ";
    return 0;
}
