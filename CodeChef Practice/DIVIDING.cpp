#include<stdio.h>
typedef unsigned long long ll;
int main() {
	
ll n,m,x,sum=0;
	
	scanf("%lld",&n);
	m=n;
	while(n!=0)
	{
	   	scanf("%lld",&x); 
	   	sum+=x;
	   	n--;
	}
	if(sum==((m*(m+1))/2))
     	printf("YES\n");
	else
	    printf("NO\n");	
	return 0;
}  