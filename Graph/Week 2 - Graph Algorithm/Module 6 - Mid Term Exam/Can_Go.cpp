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

ll n,e; 
const int N=1e3+5;
vector<pair<ll,ll>> adj[N];
ll dis[N];

class cmp
{
public:
    bool operator()(pair<ll,ll>a, pair<ll,ll>b)
    {
        return a.second>b.second;
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
            }
        }
    }
}

void solve()
{

    ll des,cost;    cin>>des>>cost;
    if(dis[des]<=cost)  yes;
    else no;

}

int32_t main()
{
    FIO

    cin>>n>>e;
    for(ll i=0;i<e;i++)
    {
        ll u,v,w;   cin>>u>>v>>w;
        adj[u].pb({v,w});
        // adj[v].pb({u,w});
    }
    ll source;  cin>>source;
    fill(dis,dis+N,LLONG_MAX);
    dijkstra(source);
    
    ll t=1; cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}