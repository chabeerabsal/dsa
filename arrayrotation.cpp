#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,3,5,6,5};
	int n,b[n],k,i;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	{
		b[(i+k)%n]=a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}