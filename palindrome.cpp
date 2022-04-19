#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]==s[len-i-1])
		{
			count++;
		}
	}
	if(len==count)
	{
		cout<<"palindrome";
	}
	else{
		cout<<"not a palindrome";
	}
}