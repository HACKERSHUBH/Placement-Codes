#include<bits/stdc++.h>
using namespace std;

int countzero(int a[],int l,int h)
{
    int mid=l+(h-l)/2;
    //if first occur element is zero in the array
    if(a[mid]==0 && (mid==0 || a[mid-1]==1))
    return mid;
    else if(a[mid]==1)
    return countzero(a,mid+1,h);
    else
    return countzero(a,l,mid-1);
}
int main()
 {
	//use binary search because the array is sorted
	int t;
	cin>>t;
	while(t--)
	{
	 int n,i,k;
	 cin>>n;
	 int a[n];
	 for(i=0;i<n;i++)
	 cin>>a[i];
	 k= countzero(a,0,n-1);
	 if(k==-1)
	 cout<<"0"<<endl;
	 else
	 cout<<n-k<<endl;
	 
	}
	return 0;
}
