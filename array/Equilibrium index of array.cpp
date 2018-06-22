#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        int sum=0,l_sum=0,flag=0;
        for(i=0;i<n;i++)
        sum=sum+a[i];
        for(i=0;i<n;i++)
        {
            sum=sum-a[i];
            if(l_sum==sum)
             {
                 flag=i+1;
             }
            else 
            l_sum=l_sum+a[i]; 
        }
        if(flag!=0)
         cout<<flag<<endl;
         else
         cout<<"-1"<<endl;
    }
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n,j,flag=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        int l_sum=0;
	        int r_sum=0;
	        for(j=0;j<i;j++)
	        {
	            l_sum=l_sum+a[j];
	        }
	        for(j=i+1;j<n;j++)
	        {
	            r_sum=r_sum+a[j];
	        }
	        if(l_sum==r_sum)
	        flag=i+1;
	        //cout<<i+1<<endl;
	       
	    }
	    if(flag!=0)
	    cout<<flag<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}

*/
