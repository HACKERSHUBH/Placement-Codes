#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,flag=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
	        a[i]=a[i]*a[i];
	        //cout<<a[i]<<" ";
	    }
	    for(i=n-1;i>=2;i--)
	    {
	        int l=0,r=i-1;
	        while(l<r)
	        {
	            //triplet found
	            if(a[l]+a[r]==a[i])
	            {//cout<<"Yes"<<endl;
	             flag=1;
	             break;
	            }
	            if(a[l]+a[r]<a[i])
	            l++;
	            else
	            r--;
	        }
	    }
	    if(flag==1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
