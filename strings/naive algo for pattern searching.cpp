#include<bits/stdc++.h>
using namespace std;

void search(char *text, char *pat)
{
	int n,m,i,j;
	n=strlen(text);
	m=strlen(pat);
	
    for(i=0;i<=n-m;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		if(text[i+j]!=pat[j])
    		break;
		}
		
		if(j==m)
		cout<<"pattern found at"<<i<<endl;
	}
}
int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		char text[100],pat[100];
 		cin>>text;
 		cin>>pat;
 		search(text,pat);
	}
 	return 0;
 }
