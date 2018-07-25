#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int sum,i,n,j;
	    cin>>n>>sum;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    bool subset[n+1][sum+1];
	   
	    for(i=0;i<=n;i++)
	    subset[i][0]=true;
	    
	    for(i=1;i<=sum;i++)
	    subset[0][i]=false;
	    
	    for(i=1;i<=n;i++)
	    {
	        for(j=1;j<=sum;j++)
	        {
	            if(j<a[i-1])
	            subset[i][j]=subset[i-1][j]; // copy the above values of table
	            else
	            subset[i][j]=subset[i-1][j] || subset[i-1][j-a[i-1]]; // go back to the previous position in table
	        }
	    }
	    cout<<subset[n][sum]<<endl;
	}
	return 0;
}

