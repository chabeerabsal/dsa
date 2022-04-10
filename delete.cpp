#include<iostream>
using namespace std;
int main()
{
	int pos,arr[50],n,i;
	cout<<"enter the value  do u want";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the position do you want to  delete";
	cin>>pos;
	if(pos>=n+1){
		cout<<"deletion is not possible";
	}
	else
	{
		for(i=pos-1;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		cout<<"the resultant array is";
		for(i=0;i<n-1;i++){
			cout<<arr[i];
		}
	}
	return 0;
}