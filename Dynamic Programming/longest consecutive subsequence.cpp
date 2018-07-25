// it is an naive approach
// this question should be done using hashing
#include<bits/stdc++.h>
using namespace std;
int maximum(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,max=0,max_c=0,cur_c=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
	        if(a[i+1]-a[i]==1)
	        cur_c++;
	        else
	        {
	        max_c= maximum(max_c,cur_c);
	        cur_c=0;
	        }
	    }
	    cout<<max_c+1<<endl;
	    
	}
	return 0;
}


/* this is an optimal approach
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    unordered_map<int,int> um;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        um[a[i]]=1;
	    }
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
	        
	        if(um.find(a[i]-1)!=um.end())
	        {
	            um[a[i]]=um[a[i]-1]+1;
	        }
	    }
	    unordered_map<int,int>::iterator itr;
	    int max=0;
	    for(itr=um.begin();itr!=um.end();itr++)
	    {
	        cout<<itr->first<<" "<<itr->second<<" ";
	        //if(itr->second>max)
	          // max=itr->second;
	    }
	    
	    
	    cout<<max<<endl;
	}
	return 0;
}
*/
