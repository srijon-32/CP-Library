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

const int N=1e5+5;
vector<ll>parent(N);
vector<ll>level(N);
void initialize(ll n)
{
    parent.assign(n+1,-1);
    level.assign(n+1,0);
}

ll find(ll node)
{
    if(parent[node]==-1)    return node;
    return parent[node]=find(parent[node]);
}

void union_by_level(ll node1,ll node2)
{
    ll leader1=find(node1),leader2=find(node2);
    if(level[leader1]>level[leader2])   parent[leader2]=leader1;
    else if(level[leader1]<level[leader2])  parent[leader1]=leader2;
    else
    {
        parent[leader1]=leader2;
        level[leader2]++;
    }
}

void solve()
{

    ll n,e; cin>>n>>e;
    initialize(n);
    for(ll i=0;i<e;i++)
    {
        ll u,v; cin>>u>>v;
        ll leader1=find(u),leader2=find(v);
        if(leader1!=leader2)
        {
            union_by_level(u,v);
        }
    }
    vector<ll>ans;
    for(ll i=1;i<=n;i++)
    {
        if(parent[i]==-1)   ans.pb(i); 
    }
    cout<<ll(ans.size()-1)<<nl;
    for(ll i=0;i<ans.size()-1;i++)
    {
        cout<<ans[i]<<" "<<ans[i+1]<<nl;
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