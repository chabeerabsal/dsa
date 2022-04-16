#include<iostream>
using namespace std;
int main()
{
	int i=5;
	int r=5;
	int z=++i+i++;
	cout<<z<<endl;
	cout<<++r<<endl;
	cout<<r++<<endl;
	return 0;
}