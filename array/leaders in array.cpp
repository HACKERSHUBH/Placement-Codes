#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n,max_lead=0,count=0;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    max_lead=a[n-1];
	    //cout<<max_lead<<" ";
	    int j=0;
	    b[j]=a[n-1];
	    j++;
	    count++;
	    for(i=n-2;i>=0;i--)
	    {
	         if(max_lead<a[i])
              { 
                b[j]=a[i];
                max_lead=a[i];
                j++;
                count++;
	          }
	    }
	    //b[count-1]=a[n-1];
	    for(j=count-1;j>=0;j--)
	    cout<<b[j]<<" ";
	    
	    cout<<endl;
	}
	return 0;
}
