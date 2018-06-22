#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
	string s;
	cin>>s;
	stable_sort(begin(s),end(s));
	do {
    for(auto element : s) //range based for using auto keyword in loop
        cout << element;
      cout <<" ";
    } 
    while (next_permutation(begin(s), end(s)));
    cout<<endl;
    }
    //cout<<endl;
	return 0;
}

