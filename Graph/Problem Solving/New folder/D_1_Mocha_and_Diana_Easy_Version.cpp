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

vector<ll>parent1,parent2,grp1,grp2;

ll find(ll node,vector<ll>&parent)
{
    if(parent[node]==-1)    return node;
    return parent[node]=find(parent[node],parent);
}

void unite(ll node1,ll node2,vector<ll>&parent,vector<ll>&grp)
{
    ll leader1=find(node1,parent),leader2=find(node2,parent);
    if(grp[leader1]>grp[leader2])   swap(leader1,leader2);
    parent[leader1]=leader2;
    grp[leader2]+=grp[leader1];
}

void solve()
{

    ll n,m1,m2; cin>>n>>m1>>m2;
    parent1.resize(n+1,-1);
    parent2.resize(n+1,-1);
    grp1.resize(n+1,1);
    grp2.resize(n+1,1);
    for(ll i=0;i<m1;i++)
    {
        ll u,v; cin>>u>>v;
        if(find(u,parent1)!=find(v,parent1))    unite(u,v,parent1,grp1);           
    }
    for(ll i=0;i<m2;i++)
    {
        ll u,v; cin>>u>>v;
        if(find(u,parent2)!=find(v,parent2))    unite(u,v,parent2,grp2);           
    }
    vector<pair<ll,ll>>ans;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(find(i,parent1)!=find(j,parent1) && find(i,parent2)!=find(j,parent2))
            {
                ans.pb({i,j});
                unite(i,j,parent1,grp1);
                unite(i,j,parent2,grp2);
            }           
        }         
    }
    cout<<ans.size()<<nl;
    for(auto [u,v]:ans)    cout<<u<<" "<<v<<nl;
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