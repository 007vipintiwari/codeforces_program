#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,r,c;
        cin>>n>>m>>r>>c;
        cout<<max(max(((r-1) + (c-1)),((r-1)+(m-c))),max(((n-r) +(m-c)),((n-r)+(c-1))))<<endl;
    }
    return 0;
}
