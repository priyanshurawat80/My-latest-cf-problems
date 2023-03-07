#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
int n,l;
cin>>n>>l;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
double maxi=0;
for (int i = 0; i < n-1; i++)
{
    if (arr[i+1]-arr[i]>maxi)
    {
        maxi=arr[i+1]-arr[i];
    }
    
}
maxi=(maxi)/2.00;
double a=max(arr[0],(l-arr[n-1]));
double ans=max(maxi,a);
cout<<fixed<<setprecision(10);
cout<<ans<<endl;


return 0;
}