#include<iostream>
using namespace std;
int main()
{
	int add[10][10],i,j,a[10][10],b[10][10];
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			add[10][10]=a[i][j]+b[i][j];
		}
	}
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<add[i][j]<<" ";
		}
		cout<<endl;
	}
	
}