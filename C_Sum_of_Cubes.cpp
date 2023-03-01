#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int x;
    cin >> x;
    int c = cbrt(x);
    if (x == 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (2*(c*c*c)==x)
    {
        cout<<"YES"<<endl;
        return;
    }
    
    for (int i = 1; i < c; i++)
    {

        int a = i * i * i;
        double b = cbrt(x - a);
        if (ceil(b) == b)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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