#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
        {
            odd.push_back(arr[i]);
        }
        else
        {
            even.push_back(arr[i]);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    int alice = 0, bob = 0;
    bool flag = true;
    while (even.empty()==false and odd.empty()==false)
    {
        if (flag)
        {
            if (even.back() > odd.back())
            {
                alice += even.back();
                even.pop_back();
                flag = false;
            }
            else
            {
                odd.pop_back();
                flag = false;
            }
        }
        else
        {
            if (odd.back() > even.back())
            {
                bob += odd.back();
                odd.pop_back();
                flag = true;
            }
            else
            {
                even.pop_back();
                flag = true;
            }
        }
    }
    while (even.empty()==false)
    {
        if (flag)
        {
            alice += even.back();
            even.pop_back();
            flag = false;
        }
        else
        {
            even.pop_back();
            flag = true;
        }
    }

    while (odd.empty()==false)
    {
        if (flag)
        {
            odd.pop_back();
            flag = false;
        }
        else
        {
            bob += odd.back();
            odd.pop_back();
            flag = true;
        }
    }

    if (alice > bob)
    {
        cout << "Alice" << endl;
    }
    else if (alice < bob)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Tie" << endl;
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