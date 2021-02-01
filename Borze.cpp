#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i = 0;
	string s1;
	while(s[i] !='\0')
	{
		if(s[i] == '.')
		{
			s1 += '0';
			i++;
		}
		if(s[i] == '-' && s[i+1] == '.')
		{
			s1 += '1';
			i += 2;
		}
		if(s[i] == '-' && s[i+1] == '-')
		{
			s1 += '2';
			i += 2;
		}
		cout<<s1<<endl;
	}
	
	return 0;
}
