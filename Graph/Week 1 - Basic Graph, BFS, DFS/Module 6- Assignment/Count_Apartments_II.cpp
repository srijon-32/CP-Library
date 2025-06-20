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
char a[N][N];
bool vis[N][N];
vector<pair<ll,ll>>d={{1,0},{-1,0},{0,-1},{0,1}};

bool valid(ll i,ll j)
{
    return (i>=0 && j>=0 && i<n && j<m);
}

ll room;

void dfs(ll si,int sj)
{
    room++;
    vis[si][sj]=true;
    for(auto [b,c]:d)
    {
        ll ci=si+b,cj=sj+c;
        if(valid(ci,cj) && !vis[ci][cj] && a[ci][cj]=='.')  dfs(ci,cj);
    }
}

void solve()
{

    cin>>n>>m;
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++) cin>>a[i][j];
    
    memset(vis,false,sizeof(vis));
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(a[i][j]=='#')    vis[i][j]=true;
            if(!vis[i][j])
            {   
                room=0;
                dfs(i,j);
                ans.pb(room);
            }
        }           
    }
    if(ans.empty())
    {
        cout<<0<<nl;
        return;
    }
    sort(all(ans));
    for(ll x:ans)   cout<<x<<" ";
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