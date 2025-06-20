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

void solve()
{

    cin>>n>>e;
    vector<vector<ll>>adj(n,vector<ll>(n,LLONG_MAX));
    for(ll i=0;i<n;i++) adj[i][i]=0;
    for(ll i=0;i<e;i++)
    {
        ll u,v; cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    cin>>s>>d;
    for(ll k=0;k<n;k++)
    {
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(i==k || j==k)    continue;
                if(adj[i][k]==LLONG_MAX || adj[k][j]==LLONG_MAX)    continue;
                if(adj[i][k]+adj[k][j] < adj[i][j])
                {
                    adj[i][j]=adj[i][k]+adj[k][j];
                }
            }           
        }           
    }
    ll mx=LLONG_MIN;
    for(ll i=0;i<n;i++)
    {
        ll dis=adj[s][i]+adj[i][d];
        mx=max(mx,dis);
    }
    cout<<mx<<nl;

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