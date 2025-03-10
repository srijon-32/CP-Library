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

    freopen("helpcross.in","r",stdin);
    freopen("helpcross.out","w",stdout);
    ll c,n; cin>>c>>n;
    multiset<ll>mst;
    for(ll i=0;i<c;i++)
    {
        ll in;  cin>>in;
        mst.insert(in);
    }
    vector<pair<ll,ll>>cow(n);
    for(ll i=0;i<n;i++) cin>>cow[i].sec>>cow[i].fi;
    sort(all(cow));
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        auto it=mst.lower_bound(cow[i].sec);
        if(it!=mst.end() and *it<=cow[i].fi)
        {
            ans++;
            mst.erase(it);
        }

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