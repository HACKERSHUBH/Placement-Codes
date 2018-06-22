// this code in c++ not work for higher numbers because c++ cant handle large integers
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int i;
	    unsigned long long int n;
	    cin>>n;
	    int count[10]={0};
	    string a = to_string(n);
	    for(i=0;i<a.length();i++)
	      count[a[i]-'0']++;
	      
	    int result=0, multiplier=1;
	    for(i=0;i<=9;i++)
	    {
	        while (count[i] > 0)
        {
            result = result + (i * multiplier);
            count[i]--;
            multiplier = multiplier * 10;
        }
	    }
	    
	    cout<<result<<endl;
	}
	return 0;
}
/*
# Python program to print the maximum number
# from the set of digits of a given number
 
# Function to print maximum number
def printMaximum(num):
 
    # Hashed array to store count of digits
    count = [0 for x in range(10)]
 
    # Connverting given number to string
    string = str(num)
 
    # Updating the count array
    for i in range(len(string)):
        count[int(string[i])] = count[int(string[i])] +  1
 
    # Result stores final number
    result = 0
    multiplier = 1
 
    # traversing the count array
    # to calculate the maximum number
 
    for i in range(10):
        while count[i] > 0:
            result = result + ( i * multiplier )
            count[i] = count[i] - 1
            multiplier = multiplier * 10
 
    return result

x=int(input())
for i in range(x):
    num=int(input())
    print (printMaximum(num))


*/
