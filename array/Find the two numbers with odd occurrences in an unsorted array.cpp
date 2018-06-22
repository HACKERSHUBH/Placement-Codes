// same as finding the numbers which is non repeating in the array of repeating numbers
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<int,int>m;
    map<int,int>:: iterator it;
    int n,i,x;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	m[x]++;
    }
    
    //m.erase(2);
    
    //it=m.find(4);
     //if(it!=m.end())
     //cout<<"key is present there\n";
     //else
     //cout<<"key is not present there\n";
  
    
    for(it=m.begin();it!=m.end();it++)
   {
    //cout<<it->first<< " "<<it->second<<endl;
    if(it->second%2!=0)
    cout<<it->first<<"\t";
    }
	return 0;
}
