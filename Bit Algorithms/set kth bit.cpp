#include <bits/stdc++.h>
using namespace std;
#define M 32
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    bitset<M>set1;
	    unsigned long long int n,k,z,x,y=1;
	    cin>>n>>k;
	    cout<<(bitset<M>(n) | bitset<M>(1)<<k).to_ulong()<<endl;
	    
	}
	
	return 0;
}
