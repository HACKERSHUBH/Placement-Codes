//ascending sort according to second element
#include <bits/stdc++.h>
using namespace std;
bool compare(const pair<int,int>&a, const pair<int,int>&b )
{
    return a.second < b.second ;
}

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
	
	sort(v.begin(),v.end(),compare);
	 for(i=0;i<n;i++)
	 {
	     cout<<v[i].first<<" "<<v[i].second;
	     cout<<endl;
	 }
	
	return 0;
}

