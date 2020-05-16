#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> a;
    while (n > 0)
    {
        int temp = n % 2;
        a.push_back(temp);
        n /= 2;
    }
    int curMax = 0, max = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 1)
            curMax++;
        else
        {
            if (curMax > max)
                max = curMax;
            curMax = 0;
        }
    }
    if (curMax > max)
        max = curMax;
    cout << max << endl;
    return 0;
}
