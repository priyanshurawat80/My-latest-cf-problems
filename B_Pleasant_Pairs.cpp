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
    int cnt = 0;
    for (int i = 1; i < n ; i++)
    {
        if (arr[i-1] <= ((2 * n) - 1))
        {
            int a = arr[i-1];
            int addi=a;
            
            while (a <= (n + (n - 1)))
            {
                int indx=a-i;
                if (indx<=n and indx>i)
                {
                    if (arr[i-1]*arr[indx-1]==i+indx)
                    {
                        cnt++;
                    }
                    
                }
                
                a=a+addi;

            }
        }
    }
    cout<<cnt<<endl;
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