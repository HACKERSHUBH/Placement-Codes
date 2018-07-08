/************************************ rightmost different bit************************************************/
#include<bits/stdc++.h>
using namespace std;

int rightmostsetbit(int n)
{
    int z;
    z= log2(n & -n)+1;
    return z;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,n;  
	    cin>>x>>y;
	    n=x^y;
	    cout<<rightmostsetbit(n)<<endl;
	}
	return 0;
}
