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

struct edge{
    ll u,v,w;
};

void solve()
{

    ll n,e; cin>>n>>e;
    vector<edge>edgeList(e);
    for(ll i=0;i<e;i++)
    {
        ll u,v,w;   cin>>u>>v>>w;
        edgeList[i]={u,v,w};
    }
    vector<ll>dis(n+1,LLONG_MAX);
    ll source;  cin>>source;
    dis[source]=0;
    for(ll i=1;i<n;i++)
    {
        for(auto [u,v,w]:edgeList)
        {
            if(dis[u]!=LLONG_MAX && dis[u]+w < dis[v])
            {
                dis[v]=dis[u]+w;
            }
        }
    }
    bool cycle=false;
    for(auto [u,v,w]:edgeList)
    {
        if(dis[u]!=LLONG_MAX && dis[u]+w < dis[v])
        {
            cycle=true;
            break;
        }
    }
    if(cycle)
    {
        cout<<"Negative Cycle Detected"<<nl;
        return;
    }
    ll q;   cin>>q;
    while(q--)
    {
        ll des; cin>>des;
        if(dis[des]==LLONG_MAX) cout<<"Not Possible"<<nl;
        else cout<<dis[des]<<nl;
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