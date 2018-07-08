#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int l=0,r=n-1,min_l=0,min_r=n-1,cur_sum=0,close_sum=INT_MAX;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    while(l<r)
	    {
	        cur_sum=a[l]+a[r];
	        if(abs(cur_sum) < abs(close_sum))
	        {
	            close_sum=cur_sum;
	            min_l=l;
	            min_r=r;
	        }
	        
	        if(cur_sum<0)
	         l++;
	        else
	         r--;
	    }
	    cout<<a[min_l]<<" "<<a[min_r];
	    cout<<endl;
	}
	return 0;
}
