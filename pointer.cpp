#include<iostream>
using namespace std;
int main()
{
	int a[5]={5,5,7,8};
	int* p=&a[0];
	int* p1=&a[1];
	int* p2=&a[2];
	int* p3=&a[3];
	
	cout<<p<<endl;
	cout<<p1<<endl;
	cout<<p2<<endl;
	cout<<p3<<endl;
	cout<<*p<<endl;
	cout<<*p1<<endl;
	cout<<*p2<<endl;
	cout<<*p3<<endl;
	p1+=2;
	cout<<p1<<endl;
	p2++;
	++p3;
	cout<<p2<<endl;
	cout<<p3<<endl;
	return 0;
}