//Sort an array according to absolute difference with given value
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    multimap <int, int> m;
	    int n,i,x;
	    cin>>n>>x;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n;i++)
	    {
	        m.insert(make_pair(abs(x-a[i]),a[i]));
	    }
	    i=0;
	    for(auto it=m.begin() ;it!=m.end(); it++)
	    {
	        a[i]= it->second;
	        i++;
	    }
	    for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

