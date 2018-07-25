#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,sum,j;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    cin>>sum;
	    
	    int T[n+1][sum+1];
	    for(int i=0; i <=n; i++){
            T[i][0] = 1;
        }
        
        for(int j=0; j <=sum; j++){
            T[0][j] = 0;
        }
        for(int i=1; i <=n; i++){
            for(int j=1; j <=sum ; j++){
                if(a[i-1] > j){
                    T[i][j] = T[i-1][j];
                }
                else{
                    T[i][j] = T[i][j-a[i-1]] + T[i-1][j];
                }
            }
        }
        cout<<T[n][sum]<<endl;
	}
	return 0;
}
