#include<bits/stdc++.h>
using namespace std;
 
int fsetbit(long long int n)
{
    long long int m=1;
    int idx=1;
    while(!(n & m))
    {
        m=m<<1; //left shift the number m;
        idx++;
    }
    return idx;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,y;
	    cin>>n;
	    if(n==0)
	    cout<<"0"<<endl;
	    else
	    cout<<fsetbit(n)<<endl;
	    //cout<<y<<endl;
	}
	return 0;
}

/* This will give the rightmost set bit
#include<stdio.h>
#include<math.h>
 
unsigned int getFirstSetBitPos(int n)
{
   return log2(n&-n)+1;
}
 
int main()
{
    int n = 12;
    printf("%u", getFirstSetBitPos(n));
    getchar();
    return 0;
}

*/
