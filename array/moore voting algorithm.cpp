#include<bits/stdc++.h>
using namespace std;
int getmajority(int a[], int n )
{
    int idx=0,count=1;  //consider 1st element as a majority element 
    int i;
    for(i=1;i<n;i++)
    {
        if(a[idx]==a[i])
        count++;
        else
        count--;
        if(count==0)
        {
            idx=i;
            count=1;
        }
    }
    return a[idx];
}

int ismajority(int a[],int n, int k)
{
    //in this function we have to check that whether it
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        ct++;
    }
    if(ct>n/2)
    return 1;
    else
    return 0;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        k= getmajority(a,n);
        if (ismajority(a,n,k))
        cout<<k<<endl;
        else
        cout<<"NO Majority Element"<<endl;
    }
    return 0;
}
