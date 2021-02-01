#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[10] = {0};
	int count = 0;
	int z = n+1;
	int m = z;
	while(m )
	{
		if(count == 4)
		{
			break;
		}
		if(arr[m%10] == 0)
		{
			count++;
			arr[m%10]++;
			m = m/10;
			
		}
		if(arr[m%10] != 0 && m > 0)
		{
			z++;
			m = z;
			count = 0;
			memset(arr,0,sizeof(arr));
		}
		
	}
	cout<<z<<endl;
	
	return 0;
}
