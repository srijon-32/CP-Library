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
#define pll pair<ll,ll>
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

ll n,m; 
vector<string>mat;
vector<vector<bool>>vis;
vector<pll>direction={{0,1},{0,-1},{1,0},{-1,0}};
map<pll,pll>parent;

bool valid(ll i,ll j)
{
    return (i>=0 && j>=0 && i<n && j<m);
}

void bfs(ll srci,ll srcj)
{
    queue<pair<ll,ll>>q;
    q.push({srci,srcj});
    vis[srci][srcj]=true;
    parent[{srci,srcj}]={-1,-1};
    while(!q.empty())
    {
        auto [pari,parj]=q.front();
        q.pop();
        for(auto [x,y]:direction)
        {
            ll childi=pari+x,childj=parj+y;
            if(valid(childi,childj) && !vis[childi][childj] && mat[childi][childj]!='#')
            {
                q.push({childi,childj});
                vis[childi][childj]=true;
                parent[{childi,childj}]={pari,parj};
            }
        }
    }
}

void solve()
{

    mat.clear();
    vis.clear();

    cin>>n>>m;
    mat.resize(n);
    vis.assign(n,vector<bool>(m,false));
    for(ll i=0;i<n;i++) cin>>mat[i];
    ll di,dj,si,sj;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(mat[i][j]=='R')
            {
                bfs(i,j);
                si=i,sj=j;
            }  
            if(mat[i][j]=='D')
            {
                di=i,dj=j;
            }         
        }           
    }
    if(!vis[di][dj])
    {
        for(ll i=0;i<n;i++) cout<<mat[i]<<nl;
    }
    else
    {
        pll pos=parent[{di,dj}];
        vector<pll>path;
        while(pos.fi!=si || pos.sec!=sj)
        {
            path.pb(pos);
            pos=parent[pos];
        }
        for(auto [i,j]:path)    mat[i][j]='X';
        for(ll i=0;i<n;i++)   cout<<mat[i]<<nl;
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