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

ll m,n,ans;
vector<string>v; 
vector<vector<bool>>vis;
vector<pair<ll,ll>>direction={{1,0},{-1,0},{0,-1},{0,1}};
bool valid(ll i,ll j)
{
    return (i>=0 && j>=0 && i<n && j<m);
}

void dfs(ll pari,ll parj)
{
    ans++;
    vis[pari][parj]=true;
    for(auto [x,y]: direction)
    {
        ll childi=pari+x,childj=parj+y;
        if(valid(childi,childj) && !vis[childi][childj] && v[childi][childj]=='.')
            dfs(childi,childj);
    }
}

void solve()
{

    ans=0;
    cin>>m>>n;
    v.resize(n);
    vis.assign(n,vector<bool>(m,false));
    for(ll i=0;i<n;i++) cin>>v[i];           
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(v[i][j]=='@')    dfs(i,j);
        }           
    }
    cout<<ans<<nl;
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