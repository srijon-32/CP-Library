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

void solve()
{

    ll n,m; cin>>n>>m;
    vector<bool>vis(n+1,false);
    for(ll i=0;i<m;i++)
    {
        ll u,v; cin>>u>>v;
        vis[u]=true;
        vis[v]=true;
    }
    ll x;
    for(ll i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            x=i;
            break;
        }     
    }
    cout<<n-1<<nl;
    for(ll i=1;i<=n;i++)
    {
        if(i==x)    continue;
        cout<<x<<" "<<i<<nl; 
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