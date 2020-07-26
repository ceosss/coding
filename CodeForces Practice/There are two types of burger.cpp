#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define forn(i,n) for(ll i=0;i<n;i++)
int main()
{
    ll tc;
    cin>>tc;
 
    while(tc--)
    {
        ll b,p,f,h,c;
        cin>>b>>p>>f;
        cin>>h>>c;
        if(p+f<=b/2)
        {
            cout<<(h*p)+(c*f)<<endl;
        }
        else
        {
            if(h>=c && p>=b/2)
            {
                ll m=b/2;
                cout<<h*m<<endl;
 
 
            }
            else if(h>=c && p<=b/2)
            {
                cout<<h*p+((b/2)-p)*c<<endl;
            }
            else if(h<=c && f>=b/2)
            {
                ll m=b/2;
                cout<<c*m<<endl;
 
 
            }
            else if(h<=c && f<=b/2)
            {
                cout<<c*f+((b/2)-f)*h<<endl;
            }
        }
    }
}