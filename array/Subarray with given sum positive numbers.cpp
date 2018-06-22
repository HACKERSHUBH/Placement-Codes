// valid for only positive numbers
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
	int i,n,sum;
    cin>>n>>sum;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int start=0,curr_sum=a[0],end,flag=0;
    for(end=1;end<=n;end++)
    {
     while(curr_sum>sum && start<end)
     {
      curr_sum=curr_sum-a[start];
      start++;
     }

     if(curr_sum==sum && start<end)
     {
        flag=1;
      //cout<<start+1<<" "<<end<<endl;
      break;  // break statement is used because there are more than one sub-arrays which have sum present in array
     }
      
     
      if(end<n)
      {
       curr_sum=curr_sum+a[end];
      }

    }
      if(flag==0)
       cout<<"-1"<<endl;
      else
       cout<<start+1<<" "<<end<<endl;
  }
	return 0;
}
