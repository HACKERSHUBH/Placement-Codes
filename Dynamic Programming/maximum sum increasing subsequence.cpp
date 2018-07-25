using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j,maxsum=0;
	    cin>>n;
	    int a[n],mis[n];
	    // store the values as same as original array in mis
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n;i++)
	    {
	        mis[i]=a[i];
	    }
	    
	    for(i=1;i<n;i++)
	    {
	        for(j=0;j<i;j++)
	        {
	            if(a[i]>a[j] && mis[i]<mis[j]+a[i] )
	            mis[i]=mis[j]+a[i];
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(maxsum<mis[i])
	        maxsum=mis[i];
	    }
	    cout<<maxsum<<endl;
	}
	return 0;
}
