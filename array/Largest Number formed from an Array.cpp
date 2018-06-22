#include <bits/stdc++.h>
using namespace std;

int digcount(int x)
{
    int count=0;
    while(x>0)
    {
        x=x/10;
        count++;
    }
    return count;
}

bool compare(int a,int b)
{
    return a*pow(10,digcount(b))+b > b*pow(10,digcount(a))+a;
}
//order of array element should not be changed
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
	    sort(a,a+n,compare);
	    for(i=0;i<n;i++)
	    cout<<a[i];
	    cout<<endl;
	}
	return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
  {
      string x= to_string(a);
      string y= to_string(b);
      return x+y> y+x;
  }

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    vector <int> v;
        for(i=0;i<n;i++)
        {
           int x;
           cin >>x;
           v.push_back(x);
        }
        sort(v.begin(),v.end(),compare);
        for(i=0;i<n;i++)
        cout<<v[i];
        cout<<endl;
	}
	return 0;
}

*/
