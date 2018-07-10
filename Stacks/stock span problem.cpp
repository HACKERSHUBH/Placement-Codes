#include<bits/stdc++.h>
using namespace std;

void findspan(int price[],int n, int span[] )
{
    stack<int>st;
    // we always put index in the stack 
    st.push(0);    
    span[0]=1;
    
    for(int i=1;i<n;i++)
    {
        // Pop elements from stack while stack is not empty and top of
        // stack is smaller than price[i]
        while(!st.empty() && price[st.top()]<=price[i])
        st.pop();
        // If stack becomes empty, then price[i] is greater than all elements
      // on left of it, i.e., price[0], price[1],..price[i-1].  Else price[i]
      // is greater than elements after top of stack
        span[i]=(st.empty())?(i+1):(i-st.top());
        st.push(i);
    }
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int price[n];
	    int span[n];
	    for(i=0;i<n;i++)
	    cin>>price[i];
	    findspan(price,n,span);
	    
	    for(i=0;i<n;i++)
	    cout<<span[i]<<" ";
	    cout<<endl;
	  }
	return 0;
}
