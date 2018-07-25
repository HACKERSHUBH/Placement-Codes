#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j,k;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    sort(a,a+n);
	    int count=0;
	    
	    for(i=0;i<n-2;i++)
	    {
	        k=i+2;
	        for(j=i+1;j<n-1;j++)
	        {
	            while(k<n && a[i]+a[j]>a[k])
	            {
	                k=k+1;
	            }
	            count=count+(k-j-1);
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
