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

vector<ll> v[10];
bool vis[10];

void bfs(ll src,ll des)
{
    queue<pair<ll,ll>>q;
    q.push({src,0});
    vis[src]=true;
    while(!q.empty())
    {
        auto [parent,level]=q.front();
        q.pop();
        if(parent==des)
        {
            cout<<level<<nl;
            return;
        }
        for(ll child:v[parent])
        {
            if(!vis[child])
            {
                q.push({child,level+1});
                vis[child]=true;
            }
        }
    }
    cout<<-1<<nl;
}

void solve()
{

    ll n,e; cin>>n>>e;
    for(ll i=0;i<e;i++)
    {
        ll a,b; cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    ll q;   cin>>q;
    while(q--)
    {
        ll src,des; cin>>src>>des;
        memset(vis,false,sizeof(vis));
        bfs(src,des);
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