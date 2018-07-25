// this question is based on the principle of inclusion and exclusion
//wikipedia link-https://en.wikipedia.org/wiki/Inclusion%E2%80%93exclusion_principle
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,ans;
        cin>>n;
        ans=(n/2)+(n/3)+(n/5)+(n/7)-(n/6)-(n/10)-(n/14)-(n/15)-(n/21)-(n/35)+(n/30)+(n/42)+(n/70)+(n/105)-(n/210);
        cout<<n-ans<<endl;
    }
    return 0;
}
