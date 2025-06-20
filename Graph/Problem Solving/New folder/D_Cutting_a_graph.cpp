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

struct query
{
    string s;
    ll u,v;
};

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
}



void solve()
{

    ll n,m,k;   cin>>n>>m>>k;
    for(ll i=0;i<m;i++)
    {
        ll u,v; cin>>u>>v;
    }
    vector<query>queries(k);
    for(ll i=0;i<k;i++)
    {
        string s;
        ll u,v; cin>>s>>u>>v;
        queries[i]={s,u,v};
    }
    parent.assign(n+1,-1);
    groupSize.assign(n+1,1);
    vector<bool>ans;
    for(ll i=k-1;i>=0;i--)
    {
        if(queries[i].s=="cut")
        {
            if(find(queries[i].u)!=find(queries[i].v))  union_by_size(queries[i].u,queries[i].v);
        }
        else
        {
            if(find(queries[i].u)==find(queries[i].v))  ans.pb(true);
            else ans.pb(false);
        }
    }
    reverse(all(ans));
    for(bool ok:ans)
    {
        if(ok)  yes;
        else no;
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