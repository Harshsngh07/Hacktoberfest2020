//Illustration of exponentiation using Fast Mod method
#include <iostream>
using namespace std;
#define ll long long

ll fastModExp(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%10;
        }
        b=b>>1;
        a=(a*a)%10;
    }
    return res;
}

int main()
{
   int t;
    
    ll a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<fastModExp(a,b)<<endl;
    }
        
    return 0;
}
