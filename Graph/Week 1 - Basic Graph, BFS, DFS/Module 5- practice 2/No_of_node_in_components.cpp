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
const int N=100;

vector<ll> v[N];
bool vis[N]={false};
ll nodes;
ll dfs(ll source)
{
    nodes++;
    vis[source]=true;
    for(ll child:v[source])
    {
        if(!vis[child]) dfs(child);
    }
    return nodes;
}

void solve()
{
    vector<vector<int>>viss;
    viss.resize(10,vector<int>(10,1));
    cout<<viss[1][1]<<nl;

    ll n,e; cin>>n>>e;
    for(ll i=0;i<e;i++)
    {
        ll a,b; cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);           
    }
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    {
        if(!vis[i])
        {
            nodes=0;
            ans.pb(dfs(i));
        }                  
    }
    sort(all(ans));
    for(ll x : ans)   cout<<x<<" ";
    cout<<nl; 
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