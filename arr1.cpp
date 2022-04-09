#include<iostream>
using namespace  std;
int main()
{
	int arr[5],n;
	cin>>n;
	cout<<"enter five array  elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	cout<<endl;}
	cout<<arr[4];
	return 0;
}
