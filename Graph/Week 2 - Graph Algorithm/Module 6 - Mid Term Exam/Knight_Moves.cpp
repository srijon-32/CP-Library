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

ll n,m,ki,kj,qi,qj;
const int N=105;
ll level[N][N];
bool vis[N][N];
vector<pair<ll,ll>>dis={{-1,2},{1,2},{-1,-2},{1,-2},{-2,-1},{-2,1},{2,-1},{2,1}};

bool valid(ll i,ll j)
{
    return (i>=0 && j>=0 && i<n && j<m);
}

void bfs(ll srci,ll srcj)
{
    queue<pair<ll,ll>>q;
    q.push({srci,srcj});
    level[srci][srcj]=0;
    vis[srci][srcj]=true;
    while(!q.empty())
    {
        auto [parenti,parentj]=q.front();
        q.pop();
        for(auto [x,y]:dis)
        {
            ll childi=parenti+x,childj=parentj+y;
            if(valid(childi,childj) && !vis[childi][childj])
            {
                q.push({childi,childj});
                level[childi][childj]=level[parenti][parentj]+1;
                vis[childi][childj]=true;
            }
        }
    }
}

void solve()
{
    
    cin>>n>>m>>ki>>kj>>qi>>qj;
    memset(level,-1,sizeof(level));
    memset(vis,false,sizeof(vis));
    bfs(ki,kj);
    cout<<level[qi][qj]<<nl;
}

int32_t main()
{
    FIO

    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}