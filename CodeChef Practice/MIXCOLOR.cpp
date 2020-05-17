#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int a[n];
        set<ll> b;
        for (int i = 0; i < n; i++) {
            cin>>a[i];
            b.insert(a[i]);
        }
        cout<<n-b.size()<<endl;
    }
	return 0;
}