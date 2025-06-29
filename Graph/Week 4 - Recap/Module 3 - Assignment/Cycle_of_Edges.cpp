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

vector<vector<ll>>adj;
vector<bool>vis;
vector<ll>par;
ll ans;

void dfs(ll parent)
{
    vis[parent]=true;
    for(ll child:adj[parent])
    {
        if(vis[child] && par[parent]!=child)    ans++;
        if(!vis[child])
        {
            par[child]=parent;
            dfs(child);
        }
    }
}

void solve()
{

    ll n,e; cin>>n>>e;
    adj.resize(n+1);
    vis.assign(n+1,false);
    par.assign(n+1,-1);

    for(ll i=0;i<e;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    cout<<ans/2<<nl;

    adj.clear();

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