#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    int  n,k;
    cin>>n>>k;
    if (n%2==k%2 and k*k<=n )
    {
        cout<<"YES"<<endl;
    }
    else 
    cout<<"NO"<<endl;
    

    
}

signed main(){
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}