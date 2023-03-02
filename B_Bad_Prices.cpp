#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int mini=arr[n-1],cnt=0;
    for (int i = n-2; i >=0; i--)
    {
        if (arr[i]>mini)
        {
            cnt++;
        }
        else
        {
            mini=arr[i];
        }
        
        
    }
    cout<<cnt<<endl;
}


signed main(){
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}