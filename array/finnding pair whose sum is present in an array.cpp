#include<bits/stdc++.h>
using namespace std;
#define MAX 1000 
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{ 
		// in this i have used hashing for checking whether sum is present or not
	    int n,x,i,flag=0;
	    cin>>n>>x;
	    int a[n];
	    int hash[MAX]={0}; //initialize hash table with 0 
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        int temp;
	       // int flag=0;
	        temp=x-a[i];
	        if(temp>=0 && hash[temp]==1)
	        {
	         flag=1;      
	         //cout<<"Yes"<<endl;
	         break;
	        }
	        else
	         hash[a[i]]=1;
	    }
	    if(flag==1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}

/*

printing all the pairs whose sum is equal to the given X.
void findPairs(int *arr, int size, int sum)
{
int index, temp;
int hash[MAX] = {0};
for(index = 0; index < size; index++)
{
temp = sum - arr[index];
if(temp >= 0 && hash[temp] == 1)
printf("Pair with given sum %d is (%d, %d)\n", sum, arr[index], temp);
hash[arr[index]] = 1;
}
}
*/

//another method of checking whether sum is present in array or not
/*
bool hasArrayTwoCandidates(int A[], int arr_size, int sum)
{
    int l, r;
 
    
    quickSort(A, 0, arr_size-1);
 
    
    l = 0;
    r = arr_size-1; 
    while (l < r)
    {
         if(A[l] + A[r] == sum)
              return 1; 
         else if(A[l] + A[r] < sum)
              l++;
         else // A[i] + A[j] > sum
              r--;
    }    
    return 0;
}
*/ 