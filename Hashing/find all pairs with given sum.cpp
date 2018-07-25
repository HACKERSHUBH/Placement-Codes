#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    vector<pair<int ,int >>v;
	    unordered_set<int>s;
	    int n,m,x,j,i;
	    cin>>n>>m>>x;
	    int a[n],b[m];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<m;i++)
	    cin>>b[i];
	    
	    //first insert the elements of a[i] into set
	    for(i=0;i<n;i++)
	    {
	        s.insert(a[i]);
	    }
	    
	    for(i=0;i<m;i++)
	    {
	        if(s.find(x-b[i])!= s.end())
	        v.push_back(make_pair(x-b[i],b[i]));
	    }
	    
	    // sort according to the first element
	    sort(v.begin(),v.end());
	    
	    if(v.size()==0)
	    cout<<"-1"<<endl;
	    else
	    {
	       for(i=0;i<v.size();i++)
	       {
	           
	       // we have to print the , upto the one value less than v.size()-1 
	       cout<<v[i].first<<" "<<v[i].second;
	       if(i!=v.size()-1)
	           {
                cout<<", ";
               }
	       }
	       cout<<endl;
	    }
	}
	return 0;
}
