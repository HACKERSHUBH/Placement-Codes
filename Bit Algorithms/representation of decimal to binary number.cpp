/************************************************Microsoft Interview****************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void bin_conv(int n)
{
    if(n>1)
     bin_conv(n/2);
    int y=n%2;
    cout<<y;
}

int main() 
{
	int n;
	cin>>n;
	bin_conv(n);
	return 0;
}

