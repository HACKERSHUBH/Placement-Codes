#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
 {
	//code
	long long int fib[100001];
	fib[1]=1;
	    fib[2]=2;
	    fib[3]=4;
	    for(int i=4;i<=100000;i++)
	    {
	        fib[i]=fib[i-1]+fib[i-2]+fib[i-3];
	    }
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,i;
	    cin>>n;
	    
	    cout<<fib[n]<<endl;
	}
	return 0;
}
