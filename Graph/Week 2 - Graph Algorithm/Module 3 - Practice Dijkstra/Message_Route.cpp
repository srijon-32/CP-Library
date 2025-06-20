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
vector<ll> adj[N];
bool vis[N];
ll level[N];
ll par[N];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        ll parent=q.front();
        q.pop();
        for(int child:adj[parent])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
                level[child]=level[parent]+1;
                par[child]=parent;
            }
        }
    }
}

void solve()
{

    ll n,m; cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    memset(vis,false,sizeof(false));
    memset(level,-1,sizeof(level));
    memset(par,-1,sizeof(par));
    bfs(1);
    if(level[n]==-1)    cout<<"IMPOSSIBLE"<<nl;
    else
    {
        // cout<<level[n]+1<<nl;
        vector<ll>path;
        ll des=n;
        while(des!=1)
        {
            path.pb(des);
            des=par[des];
        }
        path.pb(1);
        reverse(all(path));
        cout<<path.size()<<nl;
        for(ll x:path)  cout<<x<<" ";
        cout<<nl;
    }

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