#include <bits/stdc++.h>
#define int long long
using namespace std;

bool len(string a,string b){
    if (a.size()<b.size())
    {
        return true;
    }
    else
    return false;
    
}

bool palindrome(string s){
    int n=s.size();
    for (int i = 0; i < n/2; i++)
    {
        if (s[i]==s[n-1-i])
        {
            continue;
        }
        else
        return false;
        
    }
    return true;
    
}

void solve(){
    int n;
    cin>>n;
    vector<string> v;
    for (int i = 0; i < (2*n-2); i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    
    sort(v.begin(),v.end(),len);
    for (int i = 0; i < (v.size()-1); i+=2)
    {
        if (palindrome(v[i]+v[i+1]))
        {
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
        
        
    }
    cout<<"YES"<<endl;
    
    
}


signed main(){
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}