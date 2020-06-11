#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> a)
{

    int i, j, sum, max = INT_MIN;
    for (i = 1; i < a.size() - 1; i++)
    {
        for (j = 1; j < a[i].size() - 1; j++)
        {
            sum = 0;
            sum += a[i][j] + a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
            if (sum > max)
                max = sum;
        }
    }
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
