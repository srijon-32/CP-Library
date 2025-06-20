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

ll n;   
vector<ll>v;
map<ll,bool>vis;
vector<ll>ans;

void dfs(ll src)
{
    ans.pb(src);
    vis[src]=true;
    for(ll i=0;i<n;i++)
    {
        
        if(v[i]!=src && !vis[v[i]] && (src*2==v[i] || v[i]*3==src))
        {
            dfs(v[i]);
        }          
    }
}

void solve()
{

    cin>>n;
    v.resize(n);
    for(ll i=0;i<n;i++)	cin>>v[i];
    for(ll i=0;i<n;i++)
    {
        vis.clear();
        ans.clear();
        dfs(v[i]);
        if(ans.size()==n)   break;           
    }
    for(ll i=0;i<n;i++) cout<<ans[i]<<" ";           
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