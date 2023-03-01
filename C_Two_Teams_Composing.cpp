#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    int maxi=INT_MIN;
    for(auto x:mp){
        maxi=max(maxi,x.second);
    }
    int s=mp.size();
    if (s==maxi)
    {
        cout<<min(s,maxi)-1<<endl;
    }
    else
        cout<<min(s,maxi)<<endl;

}


signed main(){
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}