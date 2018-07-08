#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int arr[101][101];
	for (i =1;i<=100;i++)
	{
		for (j=1;j<=100;j++)
		{
			arr[i][j]=0;
		}
	}
	
	int x,y;
	for (i =1;i<=20;i++)
	{
		x=rand()%100;
		y=rand()%100;
		arr[x][y]=1;
		
	}
	
for (i =1;i<=100;i++)
	{
		for (j=1;j<=100;j++)
		{
			cout<<arr[i][j]<<" ";
			
		}
	 cout<<endl;	
	}
	
	
	return 0;
}
