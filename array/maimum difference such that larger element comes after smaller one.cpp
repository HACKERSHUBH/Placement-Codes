#include<bits/stdc++.h>
using namespace std;
int maximum(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	  int n,i;
	  cin>>n;
	  int a[n],diff[n];
	  for(i=0;i<n;i++)
	  cin>>a[i];
	  
	  for(i=0;i<n-1;i++)
	  {
	      diff[i]=a[i+1]-a[i];
	  }
	  /*for(i=0;i<n-1;i++)
	  {
	      cout<<diff[i]<<" "; 
	  }
	  cout<<endl;*/
	    int cur_max=diff[0];
    	for(i=1;i<n-1;i++)
    	{
    	    if(diff[i-1]>0)
    	     diff[i]=diff[i]+diff[i-1];
    	    
    	    cur_max= maximum(cur_max,diff[i]);
    	     
    	}
    	cout<<cur_max<<endl;
    	  
	}
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int maxdiff(int a[],int n)
{
    int i;
    int min_ele_so_far=a[0];
    int curr_diff= a[1]-a[0];
    int max_diff_so_far=a[1]-a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min_ele_so_far)
        min_ele_so_far=a[i];
        
        else
        {
            curr_diff=a[i] - min_ele_so_far;
            if(curr_diff>max_diff_so_far)
            max_diff_so_far=curr_diff;
        }
    }
    return max_diff_so_far;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    cout<<maxdiff(a,n)<<endl;
	}
	return 0;
}
*/
