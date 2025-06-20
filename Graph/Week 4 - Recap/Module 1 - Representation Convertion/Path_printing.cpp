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
vector<ll>parent;

void bfs(ll src)
{
    queue<ll>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        ll par=q.front();
        q.pop();
        for(ll child:adj[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
                parent[child]=par;
            }
        }
    }
}

void solve()
{

    ll n,m; cin>>n>>m;
    ll st,en;   cin>>st>>en;
    adj.resize(n+1);
    vis.assign(n+1,false);
    parent.assign(n+1,-1);
    for(ll i=0;i<m;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    bfs(st);
    ll pos=en;
    vector<ll>path;
    while(pos!=-1)
    {
        path.pb(pos);
        pos=parent[pos];
    }
    reverse(all(path));
    if(path.size()==1)  cout<<-1<<nl;
    else
    {
        cout<<path.size()-1<<nl;
        for(ll x:path)  cout<<x<<" ";
        cout<<nl;
    }

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