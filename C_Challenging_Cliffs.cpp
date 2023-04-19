#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i <n; i++)
    {
        int el;
        cin>>el;
        v.push_back(el);
    }
    sort(v.begin(),v.end());
    if (n==2)
    {
        cout<<v[0]<<" "<<v[1]<<endl;
        return;
    }
    
    int mini=INT_MAX;
    int start=INT_MAX,last=INT_MAX;;
    for (int i = 0; i < n-1; i++)
    {
        if (abs(v[i]-v[i+1])<mini)
        {
            mini=(mini,abs(v[i]-v[i+1]));
            start=i;
            
        }
        
    }
    
    for (int i = start+1; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    for (int i = 0; i < start+1; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    
    
    
}


signed main(){
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}