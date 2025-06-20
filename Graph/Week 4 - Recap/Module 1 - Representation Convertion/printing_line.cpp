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
vector<string>v;
vector<vector<bool>>vis;
vector<vector<pair<ll,ll>>>parent;
vector<pair<ll,ll>>direction={{-1,0},{1,0},{0,1},{0,-1}};

bool valid(ll i,ll j)
{
    return (i>=0 && j>=0 && i<n && j<n);
}

void bfs(ll i,ll j)
{
    queue<pair<ll,ll>>q;
    q.push({i,j});
    vis[i][j]=true;
    while(!q.empty())
    {
        auto [pari,parj]=q.front();
        q.pop();
        for(auto [x,y]:direction)
        {
            ll childi=pari+x,childj=parj+y;
            if(valid(childi,childj) && !vis[childi][childj] && v[childi][childj]!='O')
            {
                q.push({childi,childj});
                vis[childi][childj]=true;
                parent[childi][childj]={pari,parj};
            }
        }
    }
}

void solve()
{

    cin>>n;
    v.resize(n);
    vis.assign(n,vector<bool>(n,false));
    parent.assign(n,vector<pair<ll,ll>>(n,{-1,-1}));
    for(ll i=0;i<n;i++)	cin>>v[i];
    ll di,dj;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(v[i][j]=='@')
            {
                bfs(i,j);
            } 
            if(v[i][j]=='X')
            {
                di=i,dj=j;
            }         
        }           
    }
    vector<pair<ll,ll>>path;
    pair<ll,ll>pos={di,dj};
    while(pos.fi!=-1)
    {
        path.pb(pos);
        pos=parent[pos.fi][pos.sec];
    }
    if(path.size()==1)  cout<<"N"<<nl;
    else
    {
        cout<<"Y"<<nl;
        for(auto [i,j]:path)
        {
            if(v[i][j]!='@')    v[i][j]='+';
        }
        for(auto s:v)   cout<<s<<nl;
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