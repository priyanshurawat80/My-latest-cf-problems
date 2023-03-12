#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        a=a-i;
        mp[a]++;
    }
    
    int cnt=0;
    for(auto x:mp){
        if (x.second>1)
        {
            cnt=cnt+(x.second*(x.second-1))/2;
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