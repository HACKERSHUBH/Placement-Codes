#include<bits/stdc++.h>
using namespace std;

// using time complexity O(n*k)
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i,max,j;
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    // total number of subarrays is n-k
	    for(i=0;i<=n-k;i++)
	    {
	        max= a[i];
	        for(j=0;j<k;j++)
	        {
	            if(a[i+j]>max)
	            max=a[i+j];
	        }
	        cout<<max<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
