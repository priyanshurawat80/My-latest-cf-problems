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
for (int i = 1; i <= n; i++)
{
    if (arr[i-1]>1)
    {
        if (i%2!=0)
        {
            cout<<"First"<<endl;
        }
        else
        {
            cout<<"Second"<<endl;
        }
        return;
        
    }
    
}

if (n%2==0)
{
    cout<<"Second"<<endl;
}
else
{
    cout<<"First"<<endl;
}



}


signed main(){
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}