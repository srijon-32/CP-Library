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
vector<ll>dis;

void bfs(ll src)
{
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

    ll n,s;   cin>>n>>s;
    adj.resize(n);
    vis.assign(n,false);
    dis.assign(n,-1);
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            ll x;   cin>>x;
            if(x==1)    adj[i].pb(j);           
        }           
    }
    bfs(s-1);
    for(ll x:dis)   cout<<x<<" ";

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