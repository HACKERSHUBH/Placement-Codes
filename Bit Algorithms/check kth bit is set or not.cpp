#include <bits/stdc++.h>
using namespace std;
#define M 32
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    bitset<M> set1;
	    int n,k;
	    cin>>n; // decimal number
	    cin>>k; // kth position which we want to set
	    //cout<<bitset<M>(n)<<endl;
	    //bitset<M>(1) = bitset<M>(1)<<k;
	    if((bitset<M>(n) & bitset<M>(1)<<k) == 0)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
	    
	}
	
	return 0;
}
