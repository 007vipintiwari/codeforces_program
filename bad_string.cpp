#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count1 = 0;
		int m = n;
		m--;
		while(s[m] == ')')
		{
			count1++;
			m--;
		}
		int count2 = n-count1;
		if(count2 < count1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
			
	}
	return 0;
}
