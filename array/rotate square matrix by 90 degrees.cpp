#include<bits/stdc++.h>
using namespace std;

// swap function to swap the vavlue of two numbers

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j,k;
	    cin>>n;
	    int a[n][n];
	    //for reversing the row corresponding
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        cin>>a[i][j];
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0,k=n-1;j<k;j++,k--)
	          {
	          	// we should have to pass address in the swap function 
	              swap(&a[i][j],&a[i][k]);
	              
	          }
	        
	    }
	    
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=i;j<n;j++)
	        {
	        	// we should have to pass address in the swap function
	            swap(&a[i][j],&a[j][i]);
	        }
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        cout<<a[i][j]<<" ";
	        
	    }
	    cout<<endl;
	}
	return 0;
}
