#include<iostream>
using namespace std;
int main()
{
	int a[50];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	int smax;
	for(int i=0;i<n;i++)
	{
		if(max<a[i+1])
		{
			smax=max;
			max=a[i+1];
			// smax=a[i];
		}
		else if(a[i+1]>smax)
		{
			smax=a[i+1];
		}
	}
	cout<<max<<endl;
	cout<<smax;
}