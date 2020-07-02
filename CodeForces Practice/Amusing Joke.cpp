#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    int arr1[26] = {0}, arr2[26] = {0};
    for (auto i : a)
    {
        arr1[i - 'A']++;
    }
    for (auto i : b)
    {
        arr1[i - 'A']++;
    }
    for (auto i : c)
    {
        arr2[i - 'A']++;
    }
    int f = 1;
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            f = -1;
            break;
        }
    }
    if (f == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}