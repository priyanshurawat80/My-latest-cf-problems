#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[2 * n];
    vector<int> even, odd;
    vector<pair<int, int>> res;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even.push_back(i + 1);
        }
        else
        {
            odd.push_back(i + 1);
        }
    }

    for (int i = 0; i + 1 < odd.size(); i += 2)
    {
        res.push_back({odd[i], odd[i + 1]});
    }
    for (int i = 0; i + 1 < even.size(); i = i + 2)
    {
        res.push_back({even[i], even[i + 1]});
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << res[i].first << " " << res[i].second << endl;
    }
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