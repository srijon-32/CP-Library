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

ll n,m; 
vector<string>v;
vector<vector<bool>>vis;
vector<pair<ll,ll>>d={{-1,0},{1,0},{0,-1},{0,1}};
vector<vector<pair<ll,ll>>>parent;
pair<ll,ll>des;

bool ans;

bool valid(ll i,ll j)
{
    return (i>=0 && j>=0 && i<n && j<m);
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
        for(auto [x,y]:d)
        {
            ll ci=pari+x,cj=parj+y;
            if(valid(ci,cj) && v[ci][cj]=='B' && !vis[ci][cj])
            {
                vis[ci][cj]=true;
                parent[ci][cj]={pari,parj};
                des={ci,cj};
                ans=true;
                return;
            }
            if(valid(ci,cj) && v[ci][cj]=='.' && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                parent[ci][cj]={pari,parj};
            }
        }
    }
}

void solve()
{

    cin>>n>>m;
    v.resize(n);
    vis.assign(n,vector<bool>(m,false));
    parent.assign(n,vector<pair<ll,ll>>(m,{-1,-1}));
    for(ll i=0;i<n;i++)	cin>>v[i];
    ans=false;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(v[i][j]=='A')
            {
                bfs(i,j);
                break;
            }           
        }           
    }
    if(ans)
    {
        yes;
        string s;
        while(true)
        {
            if(v[des.fi][des.sec]=='A') break;
            auto [pari,parj]=parent[des.fi][des.sec];
            pair<ll,ll>check={pari-des.fi,parj-des.sec};
            if(check==d[0]) s.pb('D');
            else if(check==d[1])    s.pb('U');
            else if(check==d[2]) s.pb('R');
            else s.pb('L');
            des={pari,parj};
        }
        reverse(all(s));
        cout<<s.size()<<nl;
        cout<<s<<nl;
    }
    else no;

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