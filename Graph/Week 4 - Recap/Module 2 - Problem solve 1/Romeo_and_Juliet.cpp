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
const int N=1e5+5;

vector<ll>vis;
vector<ll>dis;
vector<ll> adj[N];

void bfs(ll src)
{
    queue<ll>q;
    q.push(src);
    vis[src]=true;
    dis[src]=0;
    while(!q.empty())
    {
        ll parent=q.front();
        q.pop();
        for(ll child:adj[parent])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
                dis[child]=dis[parent]+1;
            }
        }
    }
}

void solve()
{
    //simply bfs
    
    ll n,e; cin>>n>>e;
    vis.assign(n+1,false);
    dis.assign(n+1,-1);
    for(ll i=0;i<e;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);              
    }
    ll x,y,k;   cin>>x>>y>>k;
    bfs(x);
    ll d=(dis[y]-1)/2+1;
    if(d<=k && dis[y]>=0)    yes;
    else no;

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