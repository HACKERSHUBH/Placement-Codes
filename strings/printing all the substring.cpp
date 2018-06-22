#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,k,n,len;
	cin>>t;
	cin.ignore();
	while(t--){
    string s;
    getline(cin,s);
    //cout<<s<<endl;
    n=s.length();
    /*for(len=1;len<=n;len++)
    {
    	for(i=0;i<=n-len;i++)
    	{
    		 j=i+len-1;
    		for(k=i;k<=j;k++)
    		{
    			cout<<s[k];
    		}
    		cout<<endl;
    	}
    }*/
    
    for(len=1;len<=n;len++)
    {
    	for(i=0;i<=n-len;i++)
    	{
    	cout<<s.substr(i,len);
    	cout<<endl;
    	}
    	//cout<<endl;
    	
    }
	}
    return 0;
}
