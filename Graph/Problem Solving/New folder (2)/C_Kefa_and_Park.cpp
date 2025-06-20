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
const int mod = 1e9 + 7;

ll n,mx,ans,current;
vector<ll>cats;
vector<vector<ll>>adj;
vector<bool>vis;

void dfs(ll parent)
{
    vis[parent]=true;
    if(cats[parent]==1) current++;
    else current=0;
    if(current>mx)  return;
    if(adj[parent].empty() && current<=mx)  ans++;
    for(ll child:adj[parent])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
    
}

void solve()
{ 
    cin>>n>>mx;
    cats.resize(n+1);
    for(ll i=1;i<=n;i++)	cin>>cats[i];
    adj.resize(n+1);
    for(ll i=0;i<n-1;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u].push_back(v);
    }
    vis.assign(n+1,false);
    current=0,ans=0;
    dfs(1);
    cout<<ans<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL);

    ll t=1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}