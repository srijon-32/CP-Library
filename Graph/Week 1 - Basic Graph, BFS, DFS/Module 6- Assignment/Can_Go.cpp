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
const ll N=1e3+5;
char a[N][N];
bool vis[N][N];
vector<pair<ll,ll>>d={{-1,0},{1,0},{0,-1},{0,1}};

bool valid(ll i,ll j)
{
    return (i>=0 && j>=0 && i<n && j<m);
}

bool bfs(ll pari,ll parj)
{
    queue<pair<ll,ll>>q;
    q.push({pari,parj});
    vis[pari][parj]=true;
    while(!q.empty())
    {
        auto [pi,pj]=q.front();
        if(a[pi][pj]=='B')  return true;
        q.pop();
        for(auto [b,c]:d)
        {
            ll ci=pi+b,cj=pj+c;
            if(valid(ci,cj) && !vis[ci][cj] && (a[ci][cj]=='.' || a[ci][cj]=='B'))
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
            }
        }
    }
    return false;
}

void solve()
{

    cin>>n>>m;
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++) cin>>a[i][j];

    memset(vis,false,sizeof(vis));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(a[i][j]=='A')    
            {
                if(bfs(i,j))    yes;
                else no;
                break;
            }   
        }           
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