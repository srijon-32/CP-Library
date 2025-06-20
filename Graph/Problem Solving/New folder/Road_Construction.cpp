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

vector<ll>parent;
vector<ll>groupSize;
ll mx,n,m;

ll find(ll node)
{
    if(parent[node]==-1)    return node;
    return parent[node]=find(parent[node]);
}

void union_by_size(ll node1,ll node2)
{
    ll leader1=find(node1),leader2=find(node2);
    if(groupSize[leader1]>groupSize[leader2])   swap(leader1,leader2);
    parent[leader1]=leader2;
    groupSize[leader2]+=groupSize[leader1];
    mx=max(mx,groupSize[leader2]);
    n--;
}

void solve()
{

    cin>>n>>m;
    parent.assign(n+1,-1);
    groupSize.assign(n+1,1);
    mx=LLONG_MIN;
    for(ll i=0;i<m;i++)
    {
        ll u,v; cin>>u>>v;
        if(find(u)!=find(v))    union_by_size(u,v);
        cout<<n<<" "<<mx<<nl;
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