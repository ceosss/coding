    #include <iostream>
    #define ll long long
    using namespace std;
    
    int main() {
    	ll t;
    	cin>>t;
    	while(t--)
    	{
    	    ll n;
    	    cin>>n;
    	    ll a[n];
    	    for (int i = 1; i <= n; i++) {
    	        cin>>a[i];
    	    }
    	    ll count=0;
    	    for (int i = 1; i <= n; i++) {
    	       if(i>1&&a[i]!=a[i-1]){
    	            count++;
    	           continue;
    	       }
    	        if(i<n&&a[i]!=a[i+1])
    	            count++;
    	    }
    	    cout<<count<<endl;
    	}
    	return 0;
    }