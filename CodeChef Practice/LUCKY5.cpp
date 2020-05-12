#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '4' && s[i] != '7')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}