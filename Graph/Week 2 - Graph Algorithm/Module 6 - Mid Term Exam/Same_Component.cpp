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

const int N=1e3+5;
ll n,m; 
ll starti,startj,endi,endj; 
vector<string>v;
bool ok;
ll vis[N][N];
vector<pair<ll,ll>>d={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(ll i,ll j)
{
    return (i>=0 && i<n && j>=0 && j<m);
}
void dfs(ll si,ll sj)
{
    vis[si][sj]=true;
    for(auto [x,y]:d)
    {
        if(valid(si+x,sj+y) && !vis[si+x][sj+y] && v[si+x][sj+y]=='.')
        {
            dfs(si+x,sj+y);
        }
    }
}

void solve()
{

    cin>>n>>m;
    v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i];         
    cin>>starti>>startj>>endi>>endj;
    memset(vis,false,sizeof(vis));
    dfs(starti,startj);
    if(vis[endi][endj])  yes;
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