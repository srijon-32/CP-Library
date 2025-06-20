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

struct edge {
    ll u,v,w;
};

const int N=1e6;
vector<ll>parent(N),group_size(N);

void initialize(ll n)
{
    for(ll i=1;i<=n;i++)
    {
        parent[i]=-1;
        group_size[i]=1;
    }
}

ll find(ll node)
{
    if(parent[node]==-1)    return node;
    return parent[node]=find(parent[node]);
}

void union_by_size(ll leader1,ll leader2)
{
    if(group_size[leader1]>group_size[leader2]) swap(leader1,leader2);
    parent[leader1]=leader2;
    group_size[leader2]+=group_size[leader1];
}

void solve()
{

    ll n,m; cin>>n>>m;
    vector<edge>edgeList(m);
    for(ll i=0;i<m;i++)
    {
        ll u,v,w;   cin>>u>>v>>w;
        edgeList[i]={u,v,w};
    }
    sort(all(edgeList),[](edge a,edge b)
    {
        return a.w < b.w;
    });
    initialize(n);
    ll cost=0;
    for(ll i=0;i<m;i++)
    {
        ll u=edgeList[i].u,v=edgeList[i].v,w=edgeList[i].w;
        ll leader1=find(u),leader2=find(v);
        if(leader1!=leader2)
        {
            union_by_size(leader1,leader2);
            cost+=w;
        }          
    }
    if(group_size[find(1)]!=n)  cout<<"IMPOSSIBLE"<<nl;
    else    cout<<cost<<nl;

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
