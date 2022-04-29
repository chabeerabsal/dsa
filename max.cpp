#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int max=0;
	int min=a[0];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				max=a[j];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				min=a[i];
			}
		}
	}
	cout<<max;
	cout<<min;
}