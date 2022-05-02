#include<iostream>
using namespace std;
int main()
{
	int n,arr[50],x,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
			}
		}
	}
	cout<<x;
	
}