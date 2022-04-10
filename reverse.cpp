//reversing an array
#include<iostream>
using namespace std;
int main()
{
	int i,arr[5];
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"reverse array is";
	for(i=4;i>=0;i--)
	{
		cout<<arr[i];
	}
	return 0;
}