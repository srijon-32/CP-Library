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

ll find(ll node)
{
    if(parent[node]==node)  return node;
    return parent[node]=find(parent[node]);
}

void solve()
{

    ll n;   cin>>n;
    parent.resize(n+1);
    iota(all(parent),0);
    for(ll i=0;i<n;i++)
    {
        ll x;   cin>>x;
        x=find(x);         
        cout<<x<<" ";
        if(x+1>n)   parent[x]=parent[1];
        else    parent[x]=parent[x+1];
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