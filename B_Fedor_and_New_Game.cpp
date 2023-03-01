#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
int n,m,k;
cin>>n>>m>>k;
int arr[m+1];
for (int i = 0; i < m+1; i++)
{
    cin>>arr[i];
}
int cnt=0;
int ans[m];
for (int i = 0; i < m; i++)
{
    ans[i]=arr[m]^arr[i];
}
for (int i = 0; i < m; i++)
{
    ans[i]=__builtin_popcount(ans[i]);
}
for (int i = 0; i < m; i++)
{
    if (ans[i]<=k)
    {
        cnt++;
    }
    
}
cout<<cnt<<endl;

return 0;
}