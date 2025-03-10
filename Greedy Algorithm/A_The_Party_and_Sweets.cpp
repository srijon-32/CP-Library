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

    ll n,m; cin>>n>>m;
    ll bsum=0,gsum=0;
    vector<ll>b(n);
    for (ll i=0;i<n;i++)
    {
        cin>>b[i];
        bsum+=b[i];
    }
    vector<ll>g(m);
    for (ll i=0;i<m;i++)
    {
        cin>>g[i];
        gsum+=g[i];
    }
    sort(all(b),greater<ll>()),sort(all(g));
    if(b[0]>g[0])
    {
        cout<<-1<<nl;
        return;
    }
    ll ans=1LL*(accumulate(all(g),0LL)+accumulate(all(b),0LL)*m);
    if(b[0]==g[0])  ans-=(b[0]*m);
    else
    {
        ans-=(b[0]*(m-1));
        ans-=b[1];
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