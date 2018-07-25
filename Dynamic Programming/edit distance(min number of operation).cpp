#include<bits/stdc++.h>
using namespace std;

int minimum(int a, int b)
{
    if(a<b)
    return a;
    else
    return b;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,i,j;
	    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    // solve this problem using Dynamic Programming
	    
	    int dp[n+1][m+1];
	    for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=m;j++)
	        {
	            //handle the corner cases, and find the minimum operations
	            if(i==0)
	            dp[i][j]=j;
	            else if(j==0)
	            dp[i][j]=i;
	            
	            // last character is same in both string then no-operation
	            else if(s1[i-1]==s2[j-1])
	              dp[i][j]=dp[i-1][j-1];
	              
	              else
	              dp[i][j]= 1+ minimum(minimum(dp[i][j-1],dp[i-1][j-1]),dp[i-1][j]);
	            
	        }
	        // we have to find the last element of table
	        
	        
	    }
	    cout<<dp[n][m]<<endl;
	}
	return 0;
}
