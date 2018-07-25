using namespace std;

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
	    
	    for(i=0;i<n;i++)
	    {
	        a[i]=a[i]+(a[a[i]]%n)*n;
	        
	    }
	    for(i=0;i<n;i++)
	    {
	        a[i]=a[i]/n;
	    }
	    
	    for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
