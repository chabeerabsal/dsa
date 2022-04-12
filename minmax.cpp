#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,n;
	cout<<"enter the n value";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int min=arr[0];
	int max=0;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		
	}
	for(i=0;i<n;i++){
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"largest element"<<max;
	cout<<"smallest element"<<min;
}