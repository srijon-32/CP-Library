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

void solve()
{

    ll n,k; cin>>n>>k;
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++) cin>>v[i].sec>>v[i].fi;
    sort(all(v));
    vector<ll>in(k,-1);
    multiset<ll>mst(all(in));
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        auto it=mst.upper_bound(v[i].sec);
        if(it==mst.begin()) continue;   
        --it;  
        ans++;
        mst.erase(it);
        mst.insert(v[i].fi);         
    }
    cout<<ans<<nl;

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