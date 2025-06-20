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
vector<ll>v1,v2;

void bfs(ll src)
{
    queue<ll>q;
    q.push(src);
    level[src]=0;
    vis[src]=true;
    while(!q.empty())
    {
        ll parent=q.front();
        q.pop();
        if(level[parent]%2==1)  v1.pb(parent);
        else v2.pb(parent);
        for(ll child:adj[parent])
        {
            if(!vis[child])
            {
                q.push(child);
                level[child]=level[parent]+1;
                vis[child]=true;
            }
        }
    }
}

void solve()
{
    ll n;   cin>>n;
    for(ll i=0;i<n-1;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);          
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(1);
    ll ans=0;
    for(ll x:v1)
    {
        ans+=v2.size()-adj[x].size();
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