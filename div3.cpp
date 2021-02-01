#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,d;
		cin>>n>>k>>d;
		long long int arr[n] = {0};
		for(int i = 0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long int sum = 0;
		for(int i = 0;i<n;i++)
		{
			sum += arr[i];
		}
		long long int count = floor(sum/k);
		
		long long int divcount = min(count,d);
		
		/*while(sum >= k && count <d  )
		{
			sum =sum - k;
			divcount++;
			count++;	
		}*/
		cout<<divcount<<endl;
	}
	
	
	return 0;
}
