#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int simp = n * a;
    int s = (n / m + 1)*b;
    int short_sim = 0;
    int m_trips = (n / m) * m;
    
    n = n - m_trips;
    
    short_sim = n * a + (m_trips / m) * b;
    cout<<min(min(s,simp),short_sim)<<endl;

    return 0;
}