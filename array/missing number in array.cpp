#include <bits/stdc++.h>
using namespace std;

int main() 
{
     int t;
     cin>>t;
     while(t--)
     {
      int i,n,sum=0,asum=0,ans;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
      cin>>a[i];
      sum=(n+1)*(n+2)/2;
      //cout<<sum<<endl;
      for(i=0;i<n;i++)
      {
        asum=asum+a[i];
       }
       ans= sum-asum;
       cout<<ans<<endl;
     }

	return 0;
}

/*
#include <iostream>
using namespace std;

int main() 
{
	int n,i,res;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int x1=a[0];
    int x2=1;
    for(i=1;i<n;i++)
    {
      x1=x1^a[i];
    }
    for(i=2;i<=n+1;i++)
     {
      x2=x2^i;
     }
     res=x1^x2;
     cout<<res<<endl;
	return 0;
}
*/
