//reversing the elements in the array
#include<iostream>
using namespace std;
int main()
{
	int i,temp,j,n,arr[8];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"reversing elements in an array";
	for(i=0,j=(n/2)-1;i<n/4;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	cout<<"revesing array is";
	for(i=0;i<n;i++)
	{
		cout<<i<<arr[i];
	}
	
}