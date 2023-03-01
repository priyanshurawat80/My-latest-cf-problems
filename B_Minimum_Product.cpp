#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int a, b, x, y, n;
    int ans = 1e18;
    cin >> a >> b >> x >> y >> n;
    int p = a, q = b, r = n;

    int c = min(n, a - x);
    int c1 = min(n - c, b - y);
    ans = min(ans, (a - c) * (b - c1));

    int c2 = min(q - y, r);
    int c3 = min(r - c2, p - x);
    ans = min(ans, (p - c3) * (q - c2));

    cout << ans << endl;
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