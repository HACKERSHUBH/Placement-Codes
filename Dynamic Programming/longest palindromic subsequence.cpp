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
	    int len,i,j,k ;
	    string s;
	    cin>>s;
	    len=s.length();
	    int lps[len][len];
	    //cout<<len<<endl;
	    for(i=0;i<len;i++)
	    lps[i][i]=1; // 1 length string present in diagonal
	    
	    //k is used for size of k length characters and 
	    for(k=2;k<=len;k++)
	    {
	        for(i=0;i<=len-k;i++)
	        {
	            j=i+k-1;
	            if(s[i]==s[j] && k==2)
	            lps[i][j]=2;
	            else if(s[i]==s[j])
	            lps[i][j]=2+lps[i+1][j-1];
	            else
	            lps[i][j]=maximum(lps[i+1][j],lps[i][j-1]);
	        }
	    }
	    cout<<lps[0][len-1]<<endl;
	    
	}
	return 0;
}
