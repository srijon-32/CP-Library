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

void solve()
{

    freopen("reststops.in","r",stdin);
    freopen("reststops.out","w",stdout);
    ll f,n,rj,rb;   cin>>f>>n>>rj>>rb;
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++) cin>>v[i].sec>>v[i].fi;           
    sort(all(v),greater<pair<ll,ll>>());
    ll mx=0,time=0,ans=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i].sec>mx)
        {
            ll have=(rj*v[i].sec)-(time+((v[i].sec-mx)*rb));
            time=rj*v[i].sec;
            mx=v[i].sec;
            ans+=(have*v[i].fi);
        }
    }
    cout<<ans<<nl;

}

int32_t main()
{
    FIO

    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}