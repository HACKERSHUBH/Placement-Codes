#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,max=0,j;
	    cin>>n;
	    int a[n], lis[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n;i++)
	    lis[i]=1;
	    
	    for(i=1;i<n;i++)
	    {
	        for(j=0;j<i;j++)
	        {
	            if(a[i]>a[j] && lis[i] < lis[j]+1)
	            lis[i]=lis[j]+1;
	        }
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        if(max<lis[i])
	        max=lis[i];
	    }
	    
	    cout<<max<<endl;
	}
	return 0;
}
