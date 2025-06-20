#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nl "\n"
const int m = 10;
void solve()
{

    ll a,b; cin>>a>>b;
    ll result=1;
    while(b>0)
    {
        if(b&1) result=((result%m)*(a%m))%m;
        a=((a%m)*(a%m))%m;
        b/=2;
    }
    cout<<result<<nl;
}
int32_t main(){
    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        solve();           
    }
    return 0;
}