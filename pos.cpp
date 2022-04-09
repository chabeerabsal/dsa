//add an elements in an particular index
#include<iostream>
using namespace std;
int main()
{
	int n,value,position;
	cout<<"enter the position do u want to insert and value";
    cin>>n>>endl;
	cin>>value>>endl;
	cin>>position;
	int arr[7];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n-1;i>position-1;i--){
		arr[i+1]=arr[i];
	}
	arr[position-1]=value;
	cout<<"the resultant array is";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}	
	
return 0;	

	
}