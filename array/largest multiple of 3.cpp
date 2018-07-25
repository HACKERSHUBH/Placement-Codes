#include <bits/stdc++.h>
using namespace std;

void showq(queue <int> gq)
{
    queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    queue<int>g0,g1,g2 ;
	    int n,i,sum=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
	        sum=sum+a[i];
	        if(a[i]%3==0)
	        g0.push(a[i]);
	        
	        else if((a[i]%3)==1)
	        g1.push(a[i]);
	        
	        else
	        g2.push(a[i]);
	    }
	   // cout<<g0.size()<<" "<<g1.size()<<" "<<g2.size();
	    /*showq(g0);
	    cout<<endl;
	    showq(g1);
	    cout<<endl;
	    showq(g2);*/
	    
	    //upto this point elelments are inserted into the queue
	   
	   if ((sum % 3)==1 )
    {
        // either remove one item from queue1
        if (q1.size()!=0)
          q1.pop();
 
        // or remove two items from queue2
        else
        {
            if (q2.size()!=0 )
                q2.pop();
            else
                return 0;
 
            if (q2.size()!=0)
                q2.pop();
            else
                return 0;
        }
    }
    else if ((sum % 3) == 2)
    {
        // either remove one item from queue2
        if ( q2.size()!=0 )
            q2.pop();
 
        // or remove two items from queue1
        else
        {
            if ( q1.size()!=0)
                q1.pop();
            else
                return 0;
 
            if ( q1.size()!=0 )
                q1.pop();
            else
                return 0;
        }
    }
    // code is not completed yet because at this step i have to combine all the queues into a single array
    
	}
	return 0;
}

