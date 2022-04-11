#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,n,j,sum=0;
	cout<<"enter the n number";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	cout<<"the resultant array is"<<sum;
}