// same concept applied if consecutive 0's are not allowed
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int fib[n+1],i;
	    fib[0]=0;
	    fib[1]=2;
	    fib[2]=3;
	    for(i=3;i<=n;i++)
	    {
	        fib[i]=(fib[i-1]%mod+fib[i-2]%mod)%mod;
	    }
	   // 
	   cout<<fib[n]<<endl;
	    
	}
	return 0;
}
