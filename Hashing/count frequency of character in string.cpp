#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int a[26]={0};
	    for(int i=0; i<s.size(); i++)
            a[s[i]-97]++;
        
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]-97]!=0)
            {
            cout<<s[i]<<a[s[i]-97]<<" ";
            // if one character is printed one time then update it to zero so that it will not printed again
            a[s[i]-97]=0;
            }
        }
       cout<<endl;     
	}
	return 0;
}
