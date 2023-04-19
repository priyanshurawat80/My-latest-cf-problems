#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
int n,k;
cin>>n>>k;
string s;
cin>>s;
vector<char> v;
for (int i = 0; i < k; i++)
{
    char a;
    cin>>a;
    v.push_back(a);
}

int ans=0,cons=0;
for (int i = 0; i < n; i++)
{
    if (find(v.begin(),v.end(),s[i])!=v.end())
    {
        cons++;
    }
    else{
        ans+=(cons*(cons+1))/2;
        cons=0;
    }
    
}
ans+=(cons*(cons+1))/2;
cout<<ans<<endl;


return 0;
}