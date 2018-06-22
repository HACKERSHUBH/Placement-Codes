#include <iostream>
using namespace std;

int main() 
{
	int a,b,res,d;
    cin>>a>>b;
    res=a^b;
    d=__builtin_popcount(res);
    cout<<d;
	return 0;
}
