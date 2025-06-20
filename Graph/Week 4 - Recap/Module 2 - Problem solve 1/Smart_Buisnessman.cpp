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

struct edge{
    ll u,v,w;
};

vector<ll>parent;
vector<ll>group_size;

void initialize(int n)
{
    parent.assign(n+1,-1);
    group_size.assign(n+1,1);

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

    //minimum spanning tree (krushkal's algorith using dsu/union find)

    ll n,e; cin>>n>>e;
    initialize(n);
    vector<edge>edgeList;
    for(ll i=0;i<e;i++)
    {
        ll u,v,w;   cin>>u>>v>>w;
        edgeList.pb({u,v,w});
    }
    sort(all(edgeList),[](edge a,edge b)
    {
        return a.w < b.w;
    });
    ll cost=0;
    for(auto [u,v,w]:edgeList)
    {
        ll leader1=find(u),leader2=find(v);
        if(leader1!=leader2)
        {
            union_by_size(leader1,leader2);
            cost+=w;
        }
    }
    cout<<cost<<nl;

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