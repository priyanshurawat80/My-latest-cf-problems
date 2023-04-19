#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    set<int> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        s.insert(arr[i]);
    }
    for (auto x : s)
    {
        v.push_back(x);
    }
    int grp = 0;
    for (int i = 0; i < mp.size(); i++)
    {
        grp += (mp[v[i]] / v[i]);
        if (i!=(mp.size()-1))
        {
            mp[v[i+1]]+=(mp[v[i]] % v[i]);
        }
        
        
    }
    cout<<grp<<endl;
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