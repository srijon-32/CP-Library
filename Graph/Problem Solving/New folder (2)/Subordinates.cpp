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

vector<vector<ll>>adj;
vector<ll>leafs;
vector<bool>vis;

ll dfs(ll parent)
{
    vis[parent]=true;
    if(adj[parent].empty())
    {
        leafs[parent]=0;
        return 1;
    }
    ll total_leaf=0;
    for(ll child:adj[parent])
    {
        if(!vis[child])
        {
            total_leaf+=dfs(child);
        }
    }
    leafs[parent]=total_leaf;
    return leafs[parent]+1;
}

void solve()
{ 
    ll n;   cin>>n;
    adj.resize(n+1);
    leafs.resize(n+1);
    vis.assign(n+1,false);
    for(ll i=2;i<=n;i++)
    {
        ll v;   cin>>v;
        adj[v].push_back(i);
    }
    dfs(1);
    for(ll i=1;i<=n;i++)    cout<<leafs[i]<<" ";
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