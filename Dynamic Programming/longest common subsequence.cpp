#include<bits/stdc++.h>
using namespace std;

int maximum(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,i,j;
	    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    int lcs[n+1][m+1];
	    
	    for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=m;j++)
	        {
	            if(i==0 || j==0)
	            lcs[i][j]=0;
	            
	            else if(s1[i-1]==s2[j-1])
	            lcs[i][j]=lcs[i-1][j-1]+1;
	            
	            else
	            lcs[i][j]= maximum(lcs[i-1][j],lcs[i][j-1]);
	        }
	    }
	    cout<<lcs[n][m]<<endl;
	}
	return 0;
}
