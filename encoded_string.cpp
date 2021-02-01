#include<bits/stdc++.h>
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
		string s2 = "abcdefghijklmnop";
		string s1;
		int sum = 0;
		for(int i = 0;i<n-3;i+= 4)
		{
			sum = (s[i]- 48)*8 + (s[i+1] - 48)*4 + (s[i+2] - 48)*2  + (s[i+3] - 48);
			s1 += (s2[sum]);	
		}
		cout<<s1<<endl;	
	}
	
	return 0;
}
