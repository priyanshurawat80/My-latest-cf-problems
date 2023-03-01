#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int c1=0,c2=0,c3=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==25)
        {
            c1++;
        }
        else if(arr[i]==50){
            c1--;
            if (c1<0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            
            c2++;
        }
        else
        {
            if (c2==0)
            {
                c1=c1-3;
            

            if (c1<0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            
            }

            else{
            c1--;
            if (c1<0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            
            c2--;
            if (c2<0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            }
            c3++;
        }
        
        
    }
    cout<<"YES"<<endl;
    
return 0;
}