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
	int smax;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			int temp=max;
			max=arr[i];
			smax=temp;
		}
		
	}
	for(i=0;i<n;i++){
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"largest element"<<max<<endl;
	cout<<"smallest element"<<min<<endl;
	cout<<smax;
	return 0;
}