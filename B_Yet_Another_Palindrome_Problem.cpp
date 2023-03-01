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

    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j] && j-i>1)
            {
                cout<<"YES"<<endl;
                return;
            }
            
        }
        
    }
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