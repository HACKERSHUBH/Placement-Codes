//sort an array of 0's,1's and 2's
#include <iostream>
using namespace std;

int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
      int i,n,x=0,y=0,z=0;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
      cin>>a[i];

      for(i=0;i<n;i++)
      {
       if(a[i]==0)
        x++;
       else if(a[i]==1)
        y++;
       else if(a[i]==2)
        z++;
      }
     //cout<<x<<" "<<y<<" "<<z;
     for(i=0;i<x;i++)
       a[i]=0;

     for(i=x;i<(x+y);i++)
       a[i]=1;

     for(i=(x+y);i<n;i++)
       a[i]=2;

     for(i=0;i<n;i++)
      cout<<a[i]<<" ";
    }
	return 0;
}

/* method-2

#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
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
	    int low=0,high=n-1;
	    int mid=0;
	    while(mid<=high)
	    {
	        
	         
	         switch (a[mid])
        {
        case 0:
            swap(&a[low++], &a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&a[mid], &a[high--]);
            break;
        }
	    }
	    for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	    
	}
	return 0;
}
*/
 
