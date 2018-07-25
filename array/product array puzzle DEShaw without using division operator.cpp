#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n],prod[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    int temp=1;
	    // at this prod[n] contains product of all the elements to the left of it
	    for(i=0;i<n;i++)
	    {
	        prod[i]=temp;
	        temp=temp*a[i];
	    }
	    
	     temp=1;
	  // at this prod[n] contains product of all elements to right of it   
	    for(i=n-1;i>=0;i--)
	    {
	        prod[i]=prod[i]*temp;
	        temp=temp*a[i];
	    }
	    
	    for(i=0;i<n;i++)
	    cout<<prod[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
