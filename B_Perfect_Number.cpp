#include <bits/stdc++.h>
#define int long long
using namespace std;

int sum_of_digits(int k){
    int ans=0;
    while (k>0)
    {
        int r=k%10;
        ans+=r;
        k=k/10;
    }
    return ans;
    
}
signed main(){
int n;
cin>>n;
int cnt=0;
for (int i = 19; i < (1e9); i++)
{
    if (sum_of_digits(i)==10)
    {
        cnt++;
    }
    if (cnt==n)
    {
        cout<<i<<endl;
        return 0;
    }
    
    
}

return 0;
}