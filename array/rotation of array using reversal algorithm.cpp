#include <bits/stdc++.h>
using namespace std;

void revaraay(int a[],int start,int end)
{
    // simple swapping of elements
    while(start<end)
    {
        int temp = a[start];
        a[start]= a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n,d;
	    cin>>n>>d;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	   revaraay(a,0,d-1);
	   revaraay(a,d,n-1);
	   revaraay(a,0,n-1);
	   
	   for(i=0;i<n;i++)
	   cout<<a[i]<<" ";
	   cout<<endl;
	    
	}
	return 0;
}

