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

vector<ll>parent;
vector<ll>level;

ll update_level(ll node)
{
    if(parent[node]==-1)    return 0;
    return level[node]=level[node]+update_level(parent[node]);
}

ll find(ll node)
{
    if(parent[node]==-1)    return node;
    return parent[node]=find(parent[node]);
}

void unite(ll node1,ll node2)
{
    parent[node1]=node2;
    level[node1]++;
}

void solve()
{

    ll n,m; cin>>n>>m;
    parent.resize(n+1,-1);
    level.resize(n+1,0);
    for(ll i=0;i<m;i++)
    {
        ll op;  cin>>op;
        if(op==1)
        {
            ll u,v; cin>>u>>v;
            unite(u,v);
        }
        else
        {
            ll x;   cin>>x;
            update_level(x);
            find(x);
            cout<<level[x]<<nl;
        }
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