#include<iostream>
using namespace std;
int main()
{
	int num,first=0,second=1,i,next;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cout<<first<<endl;
		next=first+second;
		first=second;
		second=next;
	}
}