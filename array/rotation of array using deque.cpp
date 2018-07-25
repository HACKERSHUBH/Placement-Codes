#include <bits/stdc++.h>
#include <deque>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,k,x;
		cin>>n>>k;
		deque<int> dq;
		deque<int>:: iterator it;
		for( int j=0;j<n;j++)
		{
		    cin>>x;
		    dq.push_back(x);
		}
		for(int i=0;i<k;i++)
		{
			int s = dq.back();
			dq.pop_back();
			dq.push_front(s);
		}
		for(it = dq.begin();it!=dq.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
