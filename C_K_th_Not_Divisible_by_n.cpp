#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans=k+(k/(n-1));
    if (ans%n==0)
    {
        cout<<ans-1<<endl;
    }
    else
    cout<<ans<<endl;
    

    
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}