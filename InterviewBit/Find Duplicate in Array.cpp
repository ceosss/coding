#include <bits/stdc++.h>
using namespace std;

int repeatedNumber(vector<int> &a)
{

    int max = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    int b[max + 1] = {0}, f = -1;

    for (int i = 0; i < a.size(); i++)
    {
        b[a[i]]++;
        if (b[a[i]] > 1)
        {
            return a[i];
        }
    }
    return -1;
}
