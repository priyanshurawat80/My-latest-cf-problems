#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }

    // vector<int> v;
    // for (int i = 0; i < arr[0]; i++)
    // {
    //     v.push_back(1);
    // }

    // for (int i = 1; i < n; i++)
    // {
    //     int s = v.size();
    //     for (int j = 0; j < arr[i] - s; j++)
    //     {
    //         v.push_back(i + 1);
    //     }

    // for (int i = 0; i < m; i++)
    // }
    // {
    //     cout << v[arr1[i] - 1] << endl;
    // }

    for (int i = 0; i < m; i++)
    {
        auto it=upper_bound(arr,arr+n,arr1[i]);
        if (*(it-1)==arr1[i])
        {
            cout<<it-arr<<endl;
        }
        else
        {
            cout<<it-arr+1<<endl;
        }
        
        
    }
    

    return 0;
}