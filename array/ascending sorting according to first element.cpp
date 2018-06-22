//ascending sort according to first element
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	std::vector<pair<int,int>> v ;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    int x,y;
	    cin>>x>>y;
	    v.push_back(make_pair(x,y));
	}
	
	sort(v.begin(),v.end());
	 for(i=0;i<n;i++)
	 {
	     cout<<v[i].first<<" "<<v[i].second;
	     cout<<endl;
	 }
	
	return 0;
}

