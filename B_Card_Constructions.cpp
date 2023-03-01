#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int count = 0;
        while (n > 1)
        {
           int h = floor((((double)(sqrt(24 * n + 1) - 1)) / 6));
            n -= (((3 * h + 1) * h) / 2);
            count += 1;
        }
        cout<<count<<endl;
    }
}