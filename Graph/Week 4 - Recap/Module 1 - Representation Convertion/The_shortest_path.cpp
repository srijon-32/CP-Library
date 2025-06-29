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
vector<vector<pair<ll,ll>>>adj;
vector<ll>dis;
vector<ll>par;

class cmp
{
public:
    bool operator()(pair<ll,ll>a,pair<ll,ll>b)
    {
        return a.sec > b.sec;
    }
};

void dijkstra(ll src)
{
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,cmp>pq;
    pq.push({src,0});
    dis[src]=0;
    while(!pq.empty())
    {
        auto [parent,weight]=pq.top();
        pq.pop();
        for(auto [child,x]:adj[parent])
        {
            if(weight+x < dis[child])
            {
                pq.push({child,weight+x});
                dis[child]=weight+x;
                par[child]=parent;
            }
        }
    }
}

void solve()
{

    cin>>n>>m;
    ll s,e; cin>>s>>e;
    adj.resize(n+1);
    dis.assign(n+1,LLONG_MAX);
    par.assign(n+1,-1);
    for(ll i=0;i<m;i++)
    {
        ll u,v,w;   cin>>u>>v>>w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});           
    }
    dijkstra(s);
    if(dis[e]==LLONG_MAX)
    {
        cout<<-1<<nl;
        return;
    }
    vector<ll>path;
    ll pos=e;
    while(pos!=-1)
    {
        path.pb(pos);
        pos=par[pos];
    }
    reverse(all(path));
    cout<<dis[e]<<nl;
    for(ll x:path)  cout<<x<<" ";
    cout<<nl;

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