#include <bits/stdc++.h>
using namespace std;
//logic:- make the left array and make the right array then calculate the minimum among them and subtract the corresponding original array element.
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n],left[n],right[n],sum=0;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    //construct the left array
	    left[0]=a[0];
	    for(i=1;i<n;i++)
	    {
	        left[i]= max(left[i-1],a[i]);
	    }
	    // right array should start from back side
	    right[n-1]=a[n-1];
	    for(i=n-2;i>=0;i--)
	    {
	        right[i]= max(right[i+1],a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        //cout<<right[i]<<" ";
	        sum+=(min(left[i],right[i])-1);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

