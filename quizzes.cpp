#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n,x;
	cin>>n>>x;
	string s;
	cin>>s;
	int answer = x;
	for(int i = 0;i<n;i++)
	{
		if(s[i] == 'o')
			answer++;
		if(s[i] == 'x')
			answer--;
		if(answer < 0)
			answer = 0;		
	}
	cout<<answer<<endl;
	return 0;
}
