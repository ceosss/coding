#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> a(6);
    for (int i = 0; i < 6; i++)
    {
        a[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int curSum = 0, sum = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            curSum = 0;
            if (i + 2 < 6 && j + 2 < 6)
            {
                curSum += a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
                if (curSum > sum)
                {
                    sum = curSum;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
