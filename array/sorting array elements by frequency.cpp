//Sorting array elements by frequency
#include <bits/stdc++.h>
using namespace std;
// we can pass array as well as some integers in order to count frequency of elements

bool compare(pair<int,int> &p1, pair<int,int> &p2)
{
    if(p1.second==p2.second)
       return p1.first<p2.first ;
    return p1.second>p2.second ;   
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    map <int,int> m;
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n;i++)
	    m[a[i]]++;
	    
	    int s=m.size();
	    pair<int,int>p[s];
	    
	     i=0;
	    for(auto it=m.begin();it!= m.end();it++)
	    {
	        p[i]= make_pair(it-> first,it-> second);
	        i++;
	    }
	    
	    sort(p,p+s,compare);
	    
	    for(int i=0;i<s;i++)
	    {
	        int frequency= p[i].second;
	        while(frequency--)
	        {
	            cout<<p[i].first<<" ";
	        }
	        
	    }
	    cout<<endl;
	    
	}
	return 0;
}

