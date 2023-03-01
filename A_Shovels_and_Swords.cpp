#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    cout << min(c,(a+b)/3) << endl;
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