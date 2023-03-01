#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    string s;
    cin>>s;
    vector<int> v;
    v.push_back(0);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='R')
        {
            v.push_back(i+1);
        }
        
    }
    int maxi=0;
    v.push_back(s.size()+1);
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i]-v[i-1] > maxi)
        {
            maxi=v[i]-v[i-1];
        }
        
    }
    cout<<maxi<<endl;


}
signed main(){
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}