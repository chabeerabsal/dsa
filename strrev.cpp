#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	for(int i=len;i>=0;i--)
	{
		cout<<s[i]<<endl;
	}
	return 0;
}