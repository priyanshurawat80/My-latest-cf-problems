#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n; 
    cin>>n;
    string s[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int fac = 1;
    while (n > 5 * fac) {
        n -= 5 * fac;
        fac *= 2;
    }
    n = (n-1)/fac;
    cout << s[n];

    return 0;
}