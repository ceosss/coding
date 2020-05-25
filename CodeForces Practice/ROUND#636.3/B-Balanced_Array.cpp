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
        if (n % 4 == 0)
        {
            int a[n], suml = 0;
            for (int i = 0; i < n / 2; i++)
            {
                a[i] = 2 * (i + 1);
                suml += a[i];
            }
            int x = suml, i, sumr = 0, j;
            for (i = n / 2, j = 1; i < n - 1; i++, j += 2)
            {
                a[i] = j;
                sumr += a[i];
            }
            a[i] = suml - sumr;
            sumr += a[i];
            // cout<<suml<<" "<<sumr<<" "<<endl;
            cout << "YES" << endl;
            for (auto i : a)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}