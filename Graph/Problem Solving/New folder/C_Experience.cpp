
/* SRIJON
        SINGHA
            SAMANTA */
#include <bits/stdc++.h>
using namespace std;
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

vector<int>parent,grp,val,mns;

int collect_xp(int node)
{
    int value=val[node];
    if(parent[node]==node)    return value;
    value+=collect_xp(parent[node])-mns[node];
    return value;
}

int find(int node)
{
    if(parent[node]==node)    return node;
    return parent[node]=find(parent[node]);
}
void unite(int node1,int node2)
{
    int leader1=find(node1),leader2=find(node2);
    if(grp[leader1]>grp[leader2])   swap(leader1,leader2);
    parent[leader1]=leader2;
    grp[leader2]+=grp[leader1];
    mns[leader1]=val[leader2];
}

void solve()
{

    int n,m; cin>>n>>m;
    parent.resize(n+1);
    for(int i=0;i<=n;i++)   parent[i]=i;
    grp.resize(n+1,1);
    val.resize(n+1,0);
    mns.resize(n+1,0);
    for(int i=0;i<m;i++)
    {
        string s;   cin>>s;
        if(s=="add")
        {
            int v,add;   cin>>v>>add;
            val[find(v)]+=add;
        }
        else if(s=="join")
        {
            int u,v; cin>>u>>v;
            if(find(u)!=find(v))    unite(u,v);
        }
        else
        {
            int v;   cin>>v;
            cout<<collect_xp(v)<<nl;
        }       
    }

}

int32_t main()
{
    FIO

    int t=1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();           
    }

    return 0;
}