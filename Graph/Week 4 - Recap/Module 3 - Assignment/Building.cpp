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
vector<ll>groupSize;

ll find(ll node)
{
    if(parent[node]==-1)    return node;
    return parent[node]=find(parent[node]);
}

void union_by_size(ll leader1,ll leader2)
{
    if(groupSize[leader1]>groupSize[leader2])   swap(leader1,leader2);
    parent[leader1]=leader2;
    groupSize[leader2]+=groupSize[leader1];
}

void solve()
{

    ll n,e; cin>>n>>e;
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

    parent.assign(n+1,-1);
    groupSize.assign(n+1,1);
    ll cost=0;
    for(auto [u,v,w]:edgeList)
    {
        ll leader1=find(u),leader2=find(v);
        if(leader1!=leader2)
        {
            cost+=w;
            union_by_size(leader1,leader2);
        }
    }
    ll group=0;
    for(ll i=1;i<=n;i++)    if(parent[i]==-1)   group++;
    if(group==1)    cout<<cost<<nl;
    else cout<<-1<<nl;
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