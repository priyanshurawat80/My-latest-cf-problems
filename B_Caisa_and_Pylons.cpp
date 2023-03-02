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
    cout<<*max_element(arr,arr+n)<<endl;

    return 0;
}