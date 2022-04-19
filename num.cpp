#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num,digit,n,rev=0;
	cin>>num;
	n=num;
	while(num!=0){
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	if(rev==n)
	{
		cout<<"palindrome";
	}
	else{
		cout<<"not a palindrome";
	}
}