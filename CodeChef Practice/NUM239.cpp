#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll l,r;
	    cin>>l>>r;
	    int count=0;
	    for (int i = l; i <= r; i++) {
	        if(i%10==2||i%10==3||i%10==9)
	            count++;
	    }           
	    cout<<count<<endl;
	}
	return 0;
}