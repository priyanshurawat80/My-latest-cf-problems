#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
        int n, m;
		cin >> n >> m;
        int a[n][m];
		set< int > r,c;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				if(a[i][j] == 1){
					r.insert(i);
                    c.insert(j);
                }
			}
		}
        int x=n - (r.size());
        int y=m - (c.size());
		int mn = min(x,y);
		if(mn % 2)
			cout << "Ashish" << endl;
		else
			cout << "Vivek" << endl;
	}
	return 0;
}