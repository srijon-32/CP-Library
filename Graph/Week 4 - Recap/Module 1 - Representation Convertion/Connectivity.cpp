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

void dfs(ll parent)
{
    vis[parent]=true;
    for(ll child:adj[parent])
    {
        if(!vis[child]) dfs(child);
    }
}

void solve()
{

    ll n,e; cin>>n>>e;
    adj.resize(n+1);
    vis.assign(n+1,false);
    for(ll i=0;i<e;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for(ll i=1;i<=n;i++)
    {
        if(i==1)    dfs(i);
        else if(!vis[i])
        {
            no;
            return;
        }
    }
    yes;
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