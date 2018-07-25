#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    map<int, int >m;
	    int n,k,i,flag=0,temp;
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        m[a[i]]++;
	    }
	    // the element which comes first in the array,should be printed first
	    for(i=0;i<n;i++)
	    {
	        if(m[a[i]]==k)
	        {
	            temp=a[i];
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    cout<<"-1"<<endl;
	    else
	    cout<<temp<<endl;
	}
	return 0;
}
