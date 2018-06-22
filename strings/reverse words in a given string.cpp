//reverse words in a given string
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
	    // complete string reversed using this
	    reverse(s.begin(),s.end());
	    //cout<<s;
	    int m=0;
	    for(int i=1;i<s.length();i++)
	    {
	        if(s[i]=='.')
	        {
	           
	            reverse(s.begin()+m,s.begin()+i);
	        
	            m=i+1;
	        
	        }
	    }// in first case there is only one  word at last so it will not effect whether we use reverse or not
	    // but we have to use string reverse after the loop also
	    reverse(s.begin()+m,s.end());
	    cout<<s<<endl;
	    
	}
	return 0;
}


/*#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string word1 = "this";
    string word2(word1.rbegin(), word1.rend());
    cout << word2;
	return 0;
}*/

/*/*Function to reverse any sequence starting with pointer
  begin and ending with pointer end  
 void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}
*/
