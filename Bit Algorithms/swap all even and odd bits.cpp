#include<bits/stdc++.h>
using namespace std;
int swapbits(int n)
{
    int x,y;
    x= n & 0xAAAAAAAA;  //even bits in the number
    x= x>>1;
    y= n & 0x55555555;  //odd bits in the number
    y=y<<1;
    return (x|y);
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<swapbits(n)<<endl;
	}
	return 0;
}
