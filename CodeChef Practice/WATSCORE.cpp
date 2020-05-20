#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> ans (8,0);
	    int x,y;
	    for (int i = 0; i < n; i++) {
	        cin>>x>>y;
	        x--;
	        if(x<8)
	        {
	            ans[x]=max(ans[x],y);
	        }
	    }
	    ll sum=0;
	    for (auto i : ans) {
	        sum+=i;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}