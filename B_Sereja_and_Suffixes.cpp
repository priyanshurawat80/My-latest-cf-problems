#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
int n,m;
cin>>n>>m;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int suff_arr[n];
vector<int> v;
set<int> st;

for (int i=n-1; i>=0; i--)
{
    st.insert(arr[i]);
    suff_arr[i]=st.size();
}

for (int i = 0; i < m; i++)
{
    int a;
    cin>>a;
    v.push_back(suff_arr[a-1]);
}

for(auto i:v){
    cout<<i<<endl;
}

return 0;
}