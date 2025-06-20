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

    ll n,e; cin>>n>>e;
    vector<vector<ll>>adj(n+1);
    for(ll i=0;i<e;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ll mx=LLONG_MIN;
    bool flag=true;
    ll cnt1=0,cnt2=0;
    for(ll i=1;i<=n;i++)
    {
        if(adj[i].size()==1)    cnt1++;
        if(adj[i].size()==2)    cnt2++;
        mx=max(mx,ll(adj[i].size()));
    }
    if(cnt2==n)
    {
        cout<<"ring topology"<<nl;
        return;
    }
    if(cnt1==2 && cnt2==n-2)
    {
        cout<<"bus topology"<<nl;
        return;
    }
    if(cnt1==mx && cnt1+1==n)
    {
        cout<<"star topology"<<nl;
        return;
    }
    cout<<"unknown topology"<<nl;

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