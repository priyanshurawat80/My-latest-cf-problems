#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());
    double sum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            cnt++;
            sum += arr[i];
        }
        else
        {
            if ((sum + arr[i]) / (i + 1) >= x)
            {
                cnt++;
                sum+=arr[i];
            }
            else
            {
                break;
            }
        }
    }
        cout << cnt << endl;
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