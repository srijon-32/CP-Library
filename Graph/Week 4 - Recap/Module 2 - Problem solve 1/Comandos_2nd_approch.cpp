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

ll n,e,s,d; 
vector<vector<ll>>adj;
vector<bool>vis;
vector<ll>diss,disd;

void bfs(ll src,vector<ll>&dis)
{
    vis.assign(n,false);
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

    cin>>n>>e;
    adj.resize(n);
    diss.assign(n,-1);
    disd.assign(n,-1);
    for(ll i=0;i<e;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    cin>>s>>d;
    bfs(s,diss); 
    bfs(d,disd);
    ll ans=LLONG_MIN;
    for(ll i=0;i<n;i++)
    {
        ans=max(ans,diss[i]+disd[i]);   
    }
    cout<<ans<<nl;
    adj.clear();

}

int32_t main()
{
    FIO

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}