// Method-1 using O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n,max=0,j;
	    cin>>n;
	    int a[n];
	    int m[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
        for(i=0;i<n;i++)
        m[i]=a[i];
        
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]>a[j] && m[i]<m[j]+a[i])
                 m[i]=m[j]+a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(m[i]>max)
            max=m[i];
        }
        cout<<max<<endl;
	}
	return 0;
}

//method-2

