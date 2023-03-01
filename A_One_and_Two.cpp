#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    int n,cnt=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]==2)
        {
            cnt++;
        }
        
    }

    if (cnt==0)
    {
        cout<<1<<endl;
        return ;
    }
    

    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==2)
        {
            c++;
            if (c==(cnt-c))
            {
                cout<<i+1<<endl;
                return;
            }
            
        }
        
    }
    cout<<-1<<endl;
    
}


signed main(){
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}