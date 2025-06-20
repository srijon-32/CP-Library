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

ll n,m; 
const int N=11;
vector<pair<ll,ll>> adj[N];
bool vis[N];
ll ans;
void dfs(ll parent,ll xr)
{
    if(parent==n)
    {
        ans=min(ans,xr);
    }
    vis[parent]=true;
    for(auto [child,x]:adj[parent])
    {
        if(!vis[child])
        {
            dfs(child,xr^x);
        }
    }
    vis[parent]=false;  
}
void solve()
{

    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll u,v,w;   cin>>u>>v>>w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }
    ans=LLONG_MAX;
    fill(vis,vis+N,false);
    dfs(1,0);
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