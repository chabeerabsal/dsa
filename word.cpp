#include<iostream>
using namespace std;
#include<string>
/*int countwords(string* s){
	int len=0;
	int i=0;
   
}*/
int main()
{
	string s;
	s="i like you h	dihh equhbb ";
	int i=0,len=1;
	while(s[i]!=0)
	{
		if(s[i]==' ')
		{
			len++;
		}
		i++;
	}
		cout<<len<<endl;

	return 0;
}