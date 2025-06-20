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

const int N=1e3+5;
ll n,e; 
vector<ll> v[N];

void solve()
{

    cin>>n>>e;
    for(ll i=0;i<e;i++)
    {
        ll a,b; cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    ll q;   cin>>q;
    while(q--)
    {
        ll source;  cin>>source;
        if(v[source].empty())   cout<<-1<<nl;
        else
        {
            sort(rall(v[source]));
            for(ll x:v[source]) cout<<x<<" ";
            cout<<nl;
        }
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