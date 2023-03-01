#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int even = 0, odd = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] + 1 == arr[i+1])
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    if (arr[n - 1] % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }

    if (even % 2 == 0 && odd % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
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