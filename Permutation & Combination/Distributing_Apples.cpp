/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define nl "\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define fi first
#define sec second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;

vector<ll>F(2e6+5);
void factorial()
{
    for(ll i=0;i<=2e6+5;i++)
    {
        if(i==0)    F[0]=1;
        else F[i]=((F[i-1]%mod)*(i%mod))%mod;           
    }
}

ll biexp(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1) ans=(ans*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return ans;
}

void solve()
{

    ll a,b; cin>>a>>b;
    a=(a+b-1);
    ll k=((biexp(F[b],mod-2)%mod)*(biexp(F[a-b],mod-2)%mod))%mod;
    ll ans=((F[a]%mod)*(k%mod))%mod;
    cout<<ans<<nl;

}

int32_t main()
{
    FIO

    factorial();

    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}