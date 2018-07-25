#include<bits/stdc++.h>
using namespace std;
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
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    int temp=a[n-1];
	    for(i=0;i<n;i+=2)
	    {
	        if(a[i]<a[i+1])
	        swap(&a[i],&a[i+1]);
	    }
	    if(n%2!=0)
	    a[n-1]=temp;
	  for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
