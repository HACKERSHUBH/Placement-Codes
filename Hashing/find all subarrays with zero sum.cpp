using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    unordered_map<int, int>m;
	    unordered_map<int, int>::iterator it;
	    int n,i,count=0;
	    cin>>n;
	    int a[n],cum[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    cum[0]=a[0];
	    for(i=1;i<n;i++)
	    {
	        cum[i]=cum[i-1]+a[i];
	    }
	    
	   // for(i=0;i<n;i++)
	   // cout<<cum[i]<<" ";
	   for(i=0;i<n;i++)
	   {
	       m[cum[i]]++;
	   }
	   count+=m[0];
	   for(it=m.begin();it!=m.end();it++)
	   {
	       //cout<<it->first<<" "<<it->second<<endl;
	       //if(it->first==0)
	       //count++;
	       
	       count+=(it->second)*(it->second-1)/2;
	   }
	   cout<<count<<endl;
	   
	}
	return 0;
}
