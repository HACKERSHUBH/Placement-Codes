using namespace std;
#include<deque>
#include<bits/stdc++.h>
int main() {
	long long int t,count,n,m,i;
	cin>>t;
	while(t--)
	{
	    deque <long long int> d;
	    cin>>n;
	    for(i=0;i<n;i++){
	     cin>>m;
	     d.push_back(m);
	}
	//code
	long long int count=0;
	while(d.size()!=1){
	    //this block of code is for rotation of array
	    
	    int s = d.back();
		d.pop_back();
		d.push_front(s);
		
		// del is taken as the counter for deleting the nth element from queue
		
	    if(d.size()>count)
	    
	    {
	     d.erase(d.begin()+d.size()-1-count); // erasing the particular element at index 
	     count++;
	    }
	    else
	    {
	    d.pop_front();
	    }
	}
	//output
	cout<<d.at(0)<<endl;
	//d.clear();
	}
	return 0;
}
