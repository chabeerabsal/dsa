#include<iostream>
using namespace std;
int main()
{
	int arr[10][10],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}