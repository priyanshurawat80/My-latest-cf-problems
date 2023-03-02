#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    string s;
    cin>>s;
    map<char,int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    if(mp.size()==1){
        cout<<s<<endl;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout<<"10";
        }
        cout<<endl;
        
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