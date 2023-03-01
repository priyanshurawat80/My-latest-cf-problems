#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
int sum=a+b+c+d+e;
if (sum==0)
{
    cout<<-1<<endl;
    return 0;
}
if (sum%5==0)
{
    cout<<sum/5<<endl;
}
else
{
    cout<<-1<<endl; 
}


    
return 0;
}