#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        int ax, ay, bx, by, cx, cy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;

        int ab = (by - ay) * (by - ay) + (bx - ax) * (bx - ax);
        int bc = (cy - by) * (cy - by) + (cx - bx) * (cx - bx);
        int ca = (ay - cy) * (ay - cy) + (ax - cx) * (ax - cx);

        if (ab == bc + ca || bc == ab + ca || ca == ab + bc)
            count++;
    }
    cout << count << endl;
    return 0;
}