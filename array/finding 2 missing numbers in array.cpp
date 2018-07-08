#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,xr=0;
	    cin>>n;
	    int a[n-2];
	    for(i=0;i<n-2;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n-2;i++)
	    {
	        xr=xr^a[i];
	    }
	    
	    for(i=1;i<=n;i++){
	        xr=xr^i;
	    }
	    //cout<<xr;
	    //now we have to separate the both the combined number from resultant XOR
	    // find the leftmost set bit in xr
	    
	    int set_bit= xr & ~(xr-1);
	    //cout<<set_bit;
	    int x=0,y=0;
	    for(i=0;i<n-2;i++)
	    {
	        if(a[i] & set_bit)
	        x=x^a[i];
	        else
	        y=y^a[i];
	    }
	    
	    for(i=1;i<=n;i++)
	    {
	        if(i & set_bit)
	        x=x^i;
	        else
	        y=y^i;
	    }
	    cout<<x<<" "<<y<<endl;
	}
	return 0;
}

