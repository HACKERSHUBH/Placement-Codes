 // it is the naive approach  
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    //we are printing all the subarrays
    
    for(i=0;i<n;i++)  // starting point
     {
       for(j=i;j<n;j++) //ending point
        {
          for(k=i;k<=j;k++)
           cout<<a[k]<<"\t";
           cout<<endl;   
        }
        //cout<<endl;
     }

 
	return 0;
}

// more efficient approach


