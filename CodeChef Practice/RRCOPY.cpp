#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[1000000] = {0};
        int a[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        for (int i = 0; i < 1000000; i++)
        {
            if (b[i] > 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}