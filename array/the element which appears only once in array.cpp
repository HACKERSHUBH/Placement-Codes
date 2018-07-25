// this question can also be solved using binary search or Binary search is more optimal implementation of this question
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,xr=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n;i++)
	    {
	        xr=xr^a[i];
	    }
	    cout<<xr<<endl;
	}
	return 0;
}
