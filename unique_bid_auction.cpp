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
		int arr[n] = {0};
		for(int i =0;i<n;i++) cin>>arr[i];
		int brr[n+1] = {0};
		for(int i =0;i<n;i++)
		{
				brr[arr[i]]++;
		}
		int flag = -1;
		int min_value = INT_MAX;
		int min_index = -1;
		for(int i =0;i<n;i++)
		{
			if(min_value > arr[i] && brr[arr[i]] == 1)
			{
				min_value= arr[i];
				min_index = i + 1;
			}
		}
		cout<<min_index<<endl;
	}
	
	return 0;
}
