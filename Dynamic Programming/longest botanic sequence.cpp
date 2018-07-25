#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j,max=0;
	    cin>>n;
	    int a[n],lis[n],lds[n];
	    
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n;i++)
	    {
	    lis[i]=1;
	    lds[i]=1;
	    }
	    for(i=1;i<n;i++)
	    {
	        for(j=0;j<i;j++)
	        {
	            if(a[i]>a[j] && lis[i]<lis[j]+1)
	            lis[i]=lis[j]+1;
	        }
	    }
	    for(i=n-2;i>=0;i--)
	    {
	        for(j=n-1;j>i;j--)
	        {
	            if(a[i]>a[j] && lds[i]<lds[j]+1)
	            lds[i]=lds[j]+1;
	        }
	    }
	    
	    max=lis[0]+lds[0]-1;  //because one element is subracted two times
	    
	    for(i=0;i<n;i++)
	    {
	        if(lis[i]+lds[i]-1>max)
	        max=lis[i]+lds[i]-1;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
