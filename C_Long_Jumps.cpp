#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int ans[n];
    for (int i = n-1; i >=0 ; i--)
    {
        ans[i]=arr[i];
        int j=i+arr[i];
        if (j<n)
        {
            ans[i]=ans[i]+ans[j];
        }
        
    }
    
    cout<<*max_element(ans,ans+n)<<endl;
    
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