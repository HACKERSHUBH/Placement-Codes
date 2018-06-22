// stl based implementation of balanced parenthesis checker
#include<bits/stdc++.h>
using namespace std;
int ArePair(char opening,char closing)
{
	if((opening == '(' && closing == ')')|| (opening == '{' && closing == '}')|| (opening == '[' && closing == ']'))
	return 1;
	else
	return 0;
}
bool AreParanthesesBalanced(string exp)
{
	stack<char>  st;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			st.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if( st.empty() || !ArePair(st.top(),exp[i])) // ending brackets does not forms a pair then also return false
				return false;
			else
				st.pop();
		}
	}
	return st.empty() ? true:false;
}

int main()
{
	string exp;
	cin>>exp;
	if(AreParanthesesBalanced(exp))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}
