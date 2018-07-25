#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,max,flag;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(int i=1;i<n-1;i++)
    {
         max=a[i];
        flag=1;
        for(int j=0;j<i;j++){
            if(max<a[j])
               { flag=0;
                   break;
               }       
        }if(flag==1)
        {
        for(int j=i+1;j<n;j++)
        {
            if(max>a[j])
             {   flag=0;
                 break;
             }     
        }
            
        }
    
        if(flag==1)
        {
            cout<<max<<endl;
            break;
        }
    
        
    }
    
    // we have to print flag for each test case in order to check error
    if(flag==0)
    cout<<"-1"<<endl;
        //cout<<flag<<endl;
  
    
    
    
	}
	return 0;
}

